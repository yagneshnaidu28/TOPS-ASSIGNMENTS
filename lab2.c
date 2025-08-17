//Write a C program that accepts two integers from the user and performs arithmetic, 
//relational, and logical operations on them. Display the results. 


#include <stdio.h> 
 
int main() { 
    int num1; 
    int num2; 
    int sum, difference, product, quotient; 
 
    printf("Enter the first integer: "); 
    scanf("%d", &num1); 
    printf("Enter the second integer: "); 
    scanf("%d", &num2); 
 
    sum = num1 + num2; 
    difference = num1 - num2; 
    product = num1 * num2; 
    quotient = num1 / num2; 
 
    printf("Arithmetic Operations:\n"); 
    printf("Sum: %d\n", sum); 
    printf("Difference: %d\n", difference); 
    printf("Product: %d\n", product); 
    printf("Quotient: %d\n", quotient); 
 
    printf("\nRelational Operations:\n"); 
    printf("%d == %d is %d\n", num1, num2, num1 == num2); 
    printf("%d != %d is %d\n", num1, num2, num1 != num2); 
    printf("%d > %d is %d\n", num1, num2, num1 > num2); 
    printf("%d < %d is %d\n", num1, num2, num1 < num2); 
    printf("%d >= %d is %d\n", num1, num2, num1 >= num2); 
    printf("%d <= %d is %d\n", num1, num2, num1 <= num2); 
 
    printf("\nLogical Operations (assuming num1 and num2 are non-zero):\n"); 
    printf("%d && %d is %d\n", num1, num2, num1 && num2); 
    printf("%d || %d is %d\n", num1, num2, num1 || num2); 
    printf("!%d is %d\n", num1, !num1); 
 
    return 0; 
}