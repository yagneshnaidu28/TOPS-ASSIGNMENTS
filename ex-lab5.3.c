//Write a C program that takes a number as input and checks whether it is a palindrome 
//using a function.  
//• Challenge: Modify the program to check if a given string is a palindrome 
#include <stdio.h> 
#include <string.h> 
 
int isPalindromeNumber(int n) { 
    int originalNum = n; 
    int reversedNum = 0; 
    while (n > 0) { 
        reversedNum = reversedNum * 10 + n % 10; 
        n /= 10; 
    } 
    return originalNum == reversedNum; 
} 
 
int isPalindromeString(char *str) { 
    int l = 0; 
    int h = strlen(str) - 1; 
    while (h > l) { 
        if (str[l++] != str[h--]) { 
            return 0; 
        } 
    } 
    return 1; 
} 
 
int main() { 
    int num; 
    char str[100]; 
 
    printf("Enter a number to check for palindrome: "); 
    scanf("%d", &num); 
    if (isPalindromeNumber(num)) { 
        printf("%d is a palindrome.\n", num); 
    } else { 
        printf("%d is not a palindrome.\n", num); 
    } 
 
    printf("\nEnter a string to check for palindrome: "); 
    scanf("%s", str); 
    if (isPalindromeString(str)) { 
        printf("%s is a palindrome.\n", str); 
    } else { 
        printf("%s is not a palindrome.\n", str); 
    } 
 
    return 0; 
} 