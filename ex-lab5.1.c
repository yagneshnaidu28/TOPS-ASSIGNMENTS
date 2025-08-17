//Write a C program that generates the Fibonacci sequence up to N terms using a recursive 
//function. 
 //• Challenge: Modify the program to calculate the Nth Fibonacci number using both 
//iterative and recursive methods. Compare their efficiency. 
#include <stdio.h> 
 
void printFibonacci(int n) { 
    static int n1 = 0, n2 = 1, n3; 
    if (n > 0) { 
        n3 = n1 + n2; 
        n1 = n2; 
        n2 = n3; 
        printf("%d ", n3); 
        printFibonacci(n - 1); 
    } 
} 
 
long long fibRecursive(int n) { 
    if (n <= 1) 
        return n; 
    return fibRecursive(n - 1) + fibRecursive(n - 2); 
} 
 
long long fibIterative(int n) { 
    long long t1 = 0, t2 = 1, nextTerm; 
    int i; 
    if (n <= 1) 
        return n; 
    for (i = 2; i <= n; ++i) { 
        nextTerm = t1 + t2; 
        t1 = t2; 
        t2 = nextTerm; 
    } 
    return t2; 
} 
 
int main() { 
    int n; 
 
    printf("Enter the number of terms for the Fibonacci sequence: "); 
    scanf("%d", &n); 
 
    printf("Fibonacci sequence up to %d terms (recursive):\n", n); 
    printf("0 1 "); 
    printFibonacci(n - 2); 
    printf("\n\n"); 
 
    printf("Enter the term (N) to find the Fibonacci number: "); 
    scanf("%d", &n); 
 
    printf("Nth Fibonacci number (recursive): %lld\n", fibRecursive(n)); 
    printf("Nth Fibonacci number (iterative): %lld\n", fibIterative(n)); 
 
    return 0; 
}