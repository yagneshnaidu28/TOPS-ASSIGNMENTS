#include <stdio.h> 
int main() { 
int number = 10; 
int *ptr; 
ptr = &number; 
printf("Original value: %d\n", number); 
printf("Value through pointer: %d\n", *ptr); 
*ptr = 20; 
printf("\nValue after modification through pointer: %d\n", number); 
printf("Value through pointer after modification: %d\n", *ptr); 
return 0; 
} 