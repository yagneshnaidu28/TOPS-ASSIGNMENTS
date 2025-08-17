// Write a C program that includes variables, constants, and comments. Declare and use 
//different data types (int, char, float) and display their values. 

#include <stdio.h> 
 
int main() { 
    // Variables 
    int age = 30; 
    char initial = 'J'; 
    float temperature = 98.6; 
 
    // Constants 
    const int daysInWeek = 7; 
    const float PI = 3.14159; 
 
    printf("My age is %d.\n", age); 
    printf("My initial is %c.\n", initial); 
    printf("The temperature is %.1f degrees Fahrenheit.\n", temperature); 
    printf("There are %d days in a week.\n", daysInWeek); 
    printf("The value of PI is %.5f.\n", PI); 
 
    return 0; 
} 