/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int chem, math;
  printf("Please enter Chemistry Marks: ");
  scanf("%d", &chem);
  printf("Please enter Maths Marks: ");
  scanf("%d", &math);
  printf("Student's Average Marks: %d", (chem+math)/2);
  return 0;
}

