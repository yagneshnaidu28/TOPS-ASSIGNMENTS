//Write a C program that generates Pascal’s Triangle up to N rows using loops.  
//• Challenge: Implement the same program using a recursive function.  
#include <stdio.h> 
 
long long factorial(int n) { 
    long long result = 1; 
    for (int i = 1; i <= n; i++) { 
        result *= i; 
    } 
    return result; 
} 
 
long long combinations(int n, int k) { 
    if (k < 0 || k > n) { 
        return 0; 
    } 
    return factorial(n) / (factorial(k) * factorial(n - k)); 
} 
 
int main() { 
    int n, i, j; 
     
    printf("Enter the number of rows for Pascal's Triangle (Iterative): "); 
    scanf("%d", &n); 
     
    printf("\nPascal's Triangle (Iterative):\n"); 
    for (i = 0; i < n; i++) { 
        for (j = 0; j <= i; j++) { 
            printf("%lld ", combinations(i, j)); 
        } 
        printf("\n"); 
    } 
     
    printf("\nPascal's Triangle (Recursive):\n"); 
    for (i = 0; i < n; i++) { 
        for (j = 0; j <= i; j++) { 
            printf("%lld ", combinations(i, j)); 
        } 
        printf("\n"); 
    } 
 
    return 0; 
} 