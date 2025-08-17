#include <stdio.h> 
#include <stdlib.h> 
int main() { 
    FILE *fp; 
    char textToWrite[] = "This is a sample text for file handling in C."; 
    char textRead[100]; 
 
    fp = fopen("sample.txt", "w"); 
    if (fp == NULL) { 
        printf("Error opening file for writing.\n"); 
        return 1; 
    } 
 
    fprintf(fp, "%s", textToWrite); 
    fclose(fp); 
    printf("Successfully wrote to the file.\n"); 
 
    fp = fopen("sample.txt", "r"); 
    if (fp == NULL) { 
        printf("Error opening file for reading.\n"); 
        return 1; 
    } 
 
    fscanf(fp, "%[^\n]", textRead); 
    printf("Content of the file:\n%s\n", textRead); 
    fclose(fp); 
 
    return 0; 
}