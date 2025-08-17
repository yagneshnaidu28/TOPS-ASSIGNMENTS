//Write a C program that counts the number of words in a sentence entered by the user.  
//• Challenge: Modify the program to find the longest word in the sentence. 
#include <stdio.h> 
#include <string.h> 
 
int main() { 
    char sentence[200]; 
    int wordCount = 0; 
    int i; 
    int currentLength = 0; 
    int maxLength = 0; 
    int longestWordStart = 0; 
 
    printf("Enter a sentence: "); 
    fgets(sentence, sizeof(sentence), stdin); 
     
    for (i = 0; sentence[i] != '\0'; i++) { 
        if (sentence[i] == ' ' || sentence[i] == '\n' || sentence[i] == '\t') { 
            if (currentLength > 0) { 
                wordCount++; 
                if (currentLength > maxLength) { 
                    maxLength = currentLength; 
                    longestWordStart = i - currentLength; 
                } 
                currentLength = 0; 
            } 
        } else { 
            currentLength++; 
        } 
    } 
 
    if (currentLength > 0) { 
        wordCount++; 
        if (currentLength > maxLength) { 
            maxLength = currentLength; 
            longestWordStart = i - currentLength; 
        } 
    } 
 
    printf("Word count: %d\n", wordCount); 
    printf("Longest word: "); 
    for (i = 0; i < maxLength; i++) { 
        printf("%c", sentence[longestWordStart + i]); 
    } 
    printf("\n"); 
 
    return 0; 
}