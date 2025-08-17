// Write a C program that takes a string as input and reverses it using a function. 
// • Challenge: Write the program without using built-in string handling functions.  
#include <stdio.h> 
 
void reverseString(char *str) { 
    int length = 0; 
    while (str[length] != '\0') { 
        length++; 
    } 
 
    int i, j; 
    char temp; 
    for (i = 0, j = length - 1; i < j; i++, j--) { 
        temp = str[i]; 
        str[i] = str[j]; 
        str[j] = temp; 
    } 
} 
 
int main() { 
    char str[100]; 
    printf("Enter a string: "); 
    scanf("%s", str); 
 
    printf("Original string: %s\n", str); 
     
    reverseString(str); 
     
    printf("Reversed string: %s\n", str); 
 
    return 0; 
} 