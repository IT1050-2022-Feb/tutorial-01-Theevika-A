/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
int main() {
  float m1,m2,avg;
	printf("Enter two marks\n");
	scanf("%f%f",&m1,&m2);
	avg = (m1+m2)/2;
	printf("Average mark is %0.2f\n",avg);
  return 0;
}

