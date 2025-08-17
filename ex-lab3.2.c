// Write a C program that takes an integer input from the user and 
//prints its multiplication table using a for loop.  
//• Challenge: Allow the user to input the range of the multiplication 
//table (e.g., from 1 to N). 
#include <stdio.h> 
int main() { 
int num, range, i; 
printf("Enter a number to get its multiplication table: "); 
scanf("%d", &num); 
printf("Enter the range for the multiplication table (e.g., 10): "); 
scanf("%d", &range); 
for (i = 1; i <= range; i++) { 
printf("%d * %d = %d\n", num, i, num * i); 
} 
return 0; 
} 