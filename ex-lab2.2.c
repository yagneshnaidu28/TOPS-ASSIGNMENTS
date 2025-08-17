// Write a C program that takes three numbers from the user and 
//determines: o The largest number. o The smallest number.  
//• Challenge: Solve the problem using both if-else and switch-case 
//statements. 
#include <stdio.h> 
 
int main() { 
    double num1, num2, num3; 
 
    printf("Enter three numbers: "); 
    scanf("%lf %lf %lf", &num1, &num2, &num3); 
 
    double largest, smallest; 
 
    if (num1 >= num2 && num1 >= num3) { 
        largest = num1; 
    } else if (num2 >= num1 && num2 >= num3) { 
        largest = num2; 
    } else { 
        largest = num3; 
    } 
 
    if (num1 <= num2 && num1 <= num3) { 
        smallest = num1; 
    } else if (num2 <= num1 && num2 <= num3) { 
        smallest = num2; 
    } else { 
        smallest = num3; 
    } 
 
    printf("The largest number is: %.2lf\n", largest); 
    printf("The smallest number is: %.2lf\n", smallest); 
 
    return 0; 
} 