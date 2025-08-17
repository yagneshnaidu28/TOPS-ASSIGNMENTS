#include <stdio.h> 
int main() { 
int oneDArray[5] = {10, 20, 30, 40, 50}; 
int i, j; 
int twoDArray[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; 
int sum = 0; 
printf("Elements of the one-dimensional array:\n"); 
for (i = 0; i < 5; i++) { 
printf("%d ", oneDArray[i]); 
    } 
    printf("\n\n"); 
 
    printf("Elements of the two-dimensional array:\n"); 
    for (i = 0; i < 3; i++) { 
        for (j = 0; j < 3; j++) { 
            printf("%d ", twoDArray[i][j]); 
            sum += twoDArray[i][j]; 
        } 
        printf("\n"); 
    } 
 
    printf("\nSum of all elements in the two-dimensional array: %d\n", sum); 
    return 0; 
}