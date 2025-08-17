//Write a C program that takes N numbers from the user and stores them in an array. The 
//program should then calculate and display the sum of all array elements. 
//• Challenge: Modify the program to also find the average of the numbers. 
#include <stdio.h> 
int main() { 
int n, i; 
int sum = 0; 
f
 loat average; 
printf("Enter the number of elements (N): "); 
scanf("%d", &n); 
    int arr[n]; 
 
    printf("Enter %d integers:\n", n); 
    for (i = 0; i < n; i++) { 
        scanf("%d", &arr[i]); 
        sum += arr[i]; 
    } 
 
    average = (float)sum / n; 
 
    printf("Sum of all elements: %d\n", sum); 
    printf("Average of the numbers: %.2f\n", average); 
 
    return 0; 
}