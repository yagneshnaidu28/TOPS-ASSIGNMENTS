#include <stdio.h> 
#include <string.h> 
int main() { 
char str1[100], str2[50]; 
int len; 
printf("Enter the first string: "); 
scanf("%s", str1); 
printf("Enter the second string: "); 
scanf("%s", str2); 
strcat(str1, str2); 
len = strlen(str1); 
printf("Concatenated string: %s\n", str1); 
printf("Length of the concatenated string: %d\n", len); 
return 0; 
}