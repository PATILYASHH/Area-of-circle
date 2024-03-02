#include <stdio.h>
int main() {
  float pi,r;

  printf("Enter Value of Radius :");
  scanf("%f",&r);

  float rsq = r*r;
  pi = 3.14159;

  float Area = pi*rsq;

  printf("\nThe Area of Circle of Radius %f is\n %f",r,Area);

      return 0;
}