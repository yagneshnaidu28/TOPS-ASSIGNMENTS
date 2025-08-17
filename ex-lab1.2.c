//• Write a C program that takes an integer from the user and checks the 
//following using different operators: o Whether the number is even or 
//odd. o Whether the number is positive, negative, orzero.  
//o Whether the number is a multiple of both 3 and 5. 
#include <stdio.h> 
 
int main() { 
    int num; 
 
    printf("Enter an integer: "); 
    scanf("%d", &num); 
 
    if (num % 2 == 0) { 
        printf("%d is an even number.\n", num); 
    } else { 
        printf("%d is an odd number.\n", num); 
    } 
 
    if (num > 0) { 
        printf("%d is a positive number.\n", num); 
    } else if (num < 0) { 
        printf("%d is a negative number.\n", num); 
    } else { 
        printf("%d is zero.\n", num); 
    } 
 
    if (num % 3 == 0 && num % 5 == 0) { 
        printf("%d is a multiple of both 3 and 5.\n", num); 
    } else { 
        printf("%d is not a multiple of both 3 and 5.\n", num); 
    } 
 
    return 0; 
}