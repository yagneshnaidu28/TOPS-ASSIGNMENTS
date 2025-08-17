// Write a C program that accepts two 2x2 matrices from the user and adds them. Display 
//the resultant matrix.  
//• Challenge: Extend the program to work with 3x3 matrices and matrix multiplication.  
#include <stdio.h> 
 
void printMatrix(int matrix[3][3], int rows, int cols); 
 
int main() { 
    int A[2][2], B[2][2], C[2][2]; 
    int M[3][3], N[3][3], P[3][3]; 
    int i, j, k; 
 
    printf("Enter elements of the first 2x2 matrix:\n"); 
    for (i = 0; i < 2; i++) { 
        for (j = 0; j < 2; j++) { 
            scanf("%d", &A[i][j]); 
        } 
    } 
 
    printf("Enter elements of the second 2x2 matrix:\n"); 
    for (i = 0; i < 2; i++) { 
        for (j = 0; j < 2; j++) { ex-lab1.3
            scanf("%d", &B[i][j]); 
        } 
    } 
 
    for (i = 0; i < 2; i++) { 
        for (j = 0; j < 2; j++) { 
            C[i][j] = A[i][j] + B[i][j]; 
        } 
    } 
     
    printf("\nSum of the two 2x2 matrices:\n"); 
    for (i = 0; i < 2; i++) { 
        for (j = 0; j < 2; j++) { 
            printf("%d\t", C[i][j]); 
        } 
        printf("\n"); 
    } 
 
    printf("\nEnter elements of the first 3x3 matrix:\n"); 
    for (i = 0; i < 3; i++) { 
        for (j = 0; j < 3; j++) { 
            scanf("%d", &M[i][j]); 
        } 
    } 
 
    printf("Enter elements of the second 3x3 matrix:\n"); 
    for (i = 0; i < 3; i++) { 
        for (j = 0; j < 3; j++) { 
            scanf("%d", &N[i][j]); 
        } 
    } 
 
    for (i = 0; i < 3; i++) { 
        for (j = 0; j < 3; j++) { 
            P[i][j] = 0; 
            for (k = 0; k < 3; k++) { 
                P[i][j] += M[i][k] * N[k][j]; 
            } 
        } 
    } 
 
    printf("\nProduct of the two 3x3 matrices:\n"); 
    for (i = 0; i < 3; i++) { 
        for (j = 0; j < 3; j++) { 
            printf("%d\t", P[i][j]); 
        } 
        printf("\n"); 
    } 
 
    return 0; 
}