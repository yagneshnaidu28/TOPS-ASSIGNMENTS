//Write a C program that takes an integer from the user and calculates the sum of its digits 
//using a while loop. 
//• Challenge: Extend the program to reverse the digits of the number. 
#include <stdio.h> 
int main() { 
int num, originalNum, sum = 0, reversedNum = 0; 
    printf("Enter an integer: "); 
    scanf("%d", &num); 
 
    originalNum = num; 
 
    while (num != 0) { 
        int digit = num % 10; 
        sum += digit; 
        reversedNum = reversedNum * 10 + digit; 
        num /= 10; 
    } 
 
    printf("The sum of the digits of %d is: %d\n", originalNum, sum); 
    printf("The reversed number is: %d\n", reversedNum); 
 
    return 0; 
}