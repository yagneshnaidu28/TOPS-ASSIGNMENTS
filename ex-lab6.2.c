//Write a C program that takes a string from the user and counts the number of vowels 
//and consonants in the string. 
// • Challenge: Extend the program to also count digits and special characters.  
#include <stdio.h> 
#include <string.h> 
#include <ctype.h> 
 
int main() { 
    char str[100]; 
    int vowels = 0, consonants = 0, digits = 0, others = 0, i; 
 
    printf("Enter a string: "); 
    fgets(str, sizeof(str), stdin); 
 
    for (i = 0; str[i] != '\0'; i++) { 
        char ch = tolower(str[i]); 
        if (ch >= 'a' && ch <= 'z') { 
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') { 
                vowels++; 
            } else { 
                consonants++; 
            } 
        } else if (ch >= '0' && ch <= '9') { 
            digits++; 
        } else if (ch != '\n' && ch != '\r') { 
            others++; 
        } 
    } 
 
    printf("Vowels: %d\n", vowels); 
    printf("Consonants: %d\n", consonants); 
    printf("Digits: %d\n", digits); 
    printf("Special Characters: %d\n", others); 
 
    return 0; 
} 