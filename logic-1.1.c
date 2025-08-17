//Write a C program that checks whether a given number is an Armstrong number or not 
//(e.g., 153 = 1^3 + 5^3 + 3^3).  
//• Challenge: Write a program to find all Armstrong numbers between 1 and 1000. 
#include <stdio.h> 
#include <math.h> 
 
int isArmstrong(int n) { 
    int originalNum, remainder, result = 0, digits = 0; 
    originalNum = n; 
     
    while (originalNum != 0) { 
        originalNum /= 10; 
        ++digits; 
    } 
     
    originalNum = n; 
     
    while (originalNum != 0) { 
        remainder = originalNum % 10; 
        result += pow(remainder, digits); 
        originalNum /= 10; 
    } 
     
    return result == n; 
} 
 
int main() { 
    int num; 
     
    printf("Enter a number to check if it's an Armstrong number: "); 
    scanf("%d", &num); 
     
    if (isArmstrong(num)) { 
        printf("%d is an Armstrong number.\n", num); 
    } else { 
        printf("%d is not an Armstrong number.\n", num); 
    } 
     
    printf("\nArmstrong numbers between 1 and 1000:\n"); 
    for (int i = 1; i <= 1000; i++) { 
        if (isArmstrong(i)) { 
            printf("%d ", i); 
        } 
    } 
    printf("\n"); 
     
    return 0; 
}