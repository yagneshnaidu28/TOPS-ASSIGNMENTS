//Write a C program that uses the break statement to stop printing numbers when it  reaches 5. Modify the program to skip printing the number 3 using the continue 
//statement. 


#include <stdio.h> 
 
int main() { 
    int i; 
    printf("Numbers 1-10 with break at 5:\n"); 
    for (i = 1; i <= 10; i++) { 
        if (i == 6) { 
            break; 
        } 
        printf("%d ", i); 
    } 
 
    printf("\n\nNumbers 1-10 skipping 3 with continue:\n"); 
    for (i = 1; i <= 10; i++) { 
        if (i == 3) { 
            continue; 
        } 
        printf("%d ", i); 
    } 
    printf("\n"); 
    return 0; 
} 