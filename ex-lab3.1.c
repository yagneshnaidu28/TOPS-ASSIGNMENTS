// Write a C program that checks whether a given number is a prime 
//number or not using a for loop.  
//• Challenge: Modify the program to print all prime numbers between 1 
//and a given number.  
#include <stdio.h> 
 
int main() { 
    int n, i, isPrime = 1; 
 
    printf("Enter a number to check if it is prime: "); 
    scanf("%d", &n); 
 
    if (n <= 1) { 
        isPrime = 0; 
    } else { 
        for (i = 2; i <= n / 2; i++) { 
            if (n % i == 0) { 
                isPrime = 0; 
                break; 
            } 
        } 
    } 
 
    if (isPrime) { 
        printf("%d is a prime number.\n", n); 
    } else { 
        printf("%d is not a prime number.\n", n); 
    } 
 
    printf("\nAll prime numbers between 1 and %d:\n", n); 
    int j; 
    for (i = 2; i <= n; i++) { 
        isPrime = 1; 
        for (j = 2; j <= i / 2; j++) { 
            if (i % j == 0) { 
                isPrime = 0; 
                break; 
            } 
        } 
        if (isPrime) { 
            printf("%d ", i); 
        } 
} 
printf("\n"); 
return 0; 
} 