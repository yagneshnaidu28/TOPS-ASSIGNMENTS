#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

// Define constants for the rate card
const double CostPerHour = 18.50;
const double CostPerMinute = 0.40;
const double CostOfDinner = 20.70;

// The Event class encapsulates all event-related data and calculations
class Event {
private:
    std::string eventName;
    std::string firstName;
    std::string lastName;
    int numberOfGuests;
    int numberOfMinutes;
    int numberOfServers;
    double costForOneServer;
    double totalFoodCost;
    double averageCostPerPerson;
    double totalCost;
    double depositAmount;

public:
    // Constructor to initialize the Event object with user inputs
    Event(std::string eventName, std::string firstName, std::string lastName, int guests, int minutes) {
        this->eventName = eventName;
        this->firstName = firstName;
        this->lastName = lastName;
        this->numberOfGuests = guests;
        this->numberOfMinutes = minutes;
        calculateCosts();
    }

    // Function to perform all cost calculations
    void calculateCosts() {
        // Calculate the number of servers required using ceil()
        numberOfServers = static_cast<int>(ceil(static_cast<double>(numberOfGuests) / 20.0));

        // Calculate the cost for one server based on minutes
        double cost1 = (numberOfMinutes / 60) * CostPerHour;
        double cost2 = (numberOfMinutes % 60) * CostPerMinute;
        costForOneServer = cost1 + cost2;

        // Calculate the total food cost
        totalFoodCost = numberOfGuests * CostOfDinner;

        // Calculate the average cost per person
        averageCostPerPerson = totalFoodCost / numberOfGuests;

        // Calculate the total cost of the event
        totalCost = totalFoodCost + (costForOneServer * numberOfServers);

        // Calculate the deposit amount
        depositAmount = totalCost * 0.25;
    }

    // Function to display the final cost estimation
    void displayCostEstimation() {
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "\n--- Event Cost Estimation for " << eventName << " ---\n";
        std::cout << "Client: " << firstName << " " << lastName << "\n";
        std::cout << "Number of Guests: " << numberOfGuests << "\n";
        std::cout << "Event Duration: " << numberOfMinutes << " minutes\n\n";

        std::cout << "Required Number of Servers: " << numberOfServers << "\n";
        std::cout << "Cost per Server: $" << costForOneServer << "\n";
        std::cout << "Total Food Cost: $" << totalFoodCost << "\n";
        std::cout << "Average Cost per Person: $" << averageCostPerPerson << "\n";

        std::cout << "\n--- Final Summary ---\n";
        std::cout << "TOTAL COST: $" << totalCost << "\n";
        std::cout << "DEPOSIT AMOUNT (25%): $" << depositAmount << "\n";
    }
};

// Main function where the program execution begins
int main() {
    std::string eventName;
    std::string firstName, lastName;
    int numberOfGuests;
    int numberOfMinutes;

    // Prompt for event name
    std::cout << "Welcome to the Event Organizer!\n";
    std::cout << "Please enter the NAME OF THE EVENT: ";
    std::getline(std::cin, eventName);

    // Loop for user details to ensure valid input
    while (true) {
        std::cout << "\nPlease enter your FIRST NAME: ";
        std::cin >> firstName;
        std::cout << "Please enter your LAST NAME: ";
        std::cin >> lastName;
        std::cout << "Please enter the number of guests: ";
        std::cin >> numberOfGuests;
        std::cout << "Please enter the duration of the event in minutes: ";
        std::cin >> numberOfMinutes;

        // Conditional statement to check for valid positive inputs
        if (numberOfGuests > 0 && numberOfMinutes > 0) {
            break; // Exit loop if inputs are valid
        } else {
            std::cout << "\nInvalid input. Number of guests and minutes must be positive. Please try again.\n";
            std::cin.clear(); // Clear error flags
            std::cin.ignore(10000, '\n'); // Discard invalid input
        }
    }

    // Create an Event object using the user's input
    Event myEvent(eventName, firstName, lastName, numberOfGuests, numberOfMinutes);

    // Call the function to display the cost estimation
    myEvent.displayCostEstimation();

    std::cout << "\nThank you for using the Event Organizer!";

    return 0;
}