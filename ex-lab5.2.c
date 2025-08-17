// Write a C program that calculates the factorial of a given number using a function.  
//• Challenge: Implement both an iterative and a recursive version of the factorial function 
//and compare their performance for large numbers. 
#include <stdio.h> 
#include <time.h> 
 
unsigned long long factorial_iterative(int n) { 
    unsigned long long result = 1; 
    int i; 
    for (i = 1; i <= n; i++) { 
        result *= i; 
    } 
    return result; 
} 
 
unsigned long long factorial_recursive(int n) { 
    if (n == 0) { 
        return 1; 
    } 
    return (unsigned long long)n * factorial_recursive(n - 1); 
} 
 
int main() { 
    int num; 
    clock_t start_t, end_t; 
    double total_t; 
 
    printf("Enter a number to calculate its factorial: "); 
    scanf("%d", &num); 
 
    start_t = clock(); 
    printf("Iterative Factorial of %d: %llu\n", num, factorial_iterative(num)); 
    end_t = clock(); 
    total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC; 
    printf("Time taken (Iterative): %f seconds\n", total_t); 
 
    start_t = clock(); 
    printf("Recursive Factorial of %d: %llu\n", num, factorial_recursive(num)); 
    end_t = clock(); 
    total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC; 
    printf("Time taken (Recursive): %f seconds\n", total_t); 
 
    return 0; 
}