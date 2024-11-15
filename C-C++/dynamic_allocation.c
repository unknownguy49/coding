#include <stdio.h>
#include <stdlib.h> // Required for dynamic memory functions: malloc, calloc, realloc, free
int main() {
 int *ptr;
 int n,n2, i;
 // Ask the user to input the number of elements
 printf("Enter the number of elements: ");
 scanf("%d", &n);
 // Dynamically allocate memory using malloc
 ptr = (int*) calloc(n , sizeof(int)); // Allocate memory for 'n' integers
 // Check if the memory has been successfully allocated
 if (ptr == NULL) {
 printf("Memory allocation failed\n");
 return 1; // Exit the program if memory allocation fails
 }
 // Input values for the dynamically allocated array
 printf("Enter %d elements:\n", n);
 for (i = 0; i < n; i++) {
 scanf("%d",(ptr+i));
  // Using pointer arithmetic to store elements
 }
 
 for (i = 0; i < n; i++) {
printf("%d\n", *(ptr + i));
  // Using pointer arithmetic to store elements
 }
 
 
 printf("before realloc():%d",ptr);
 printf("\n");
 printf("Enter No of elements to be added:\n");
 scanf("%d",&n2);
 
 ptr = (int*) realloc(ptr, (n+n2) * sizeof(int));
 printf("Enter %d elements:\n", n2);
 for (i = 0; i < n2; i++) {
 scanf("%d", ptr +n+i); // Using pointer arithmetic to store elements
 }
 printf("After realloc():%d",ptr);
 printf("The elements are:\n");
 for (i = 0; i < (n+n2); i++) {
 printf("%d ", *(ptr + i)); // Using pointer arithmetic to access elements
 }
free(ptr);
//ptr=NULL;
printf("The elements after free() are:\n");
 for (i = 0; i < (n+n2); i++) {
 printf("%d ", *(ptr + i)); // Using pointer arithmetic to access elements
 }
}