/**
 *Author: SungHa Park
 *Date: 09/24/2018
 *This program computes the arithmetic-geometric mean of two positive numbers outputs the AGM to the standard output.
 */
 
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc, char **argv) {
  double x, y, E;
  double A, G;
 
  x = atof(argv[1]);
  y = atof(argv[2]);
  E = atof(argv[3]);
  
  A = (.5)*(x+y);
  G = sqrt(x*y);
 
 while (fabs(A - G) > E) {
   double currentA = A;
   A = (.5) * (A + G);
   G = sqrt(currentA * G);
 }
 printf("M(%f,%f): %f\n", x, y, A);
return 0;
}
