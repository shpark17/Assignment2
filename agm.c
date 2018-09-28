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
  double currentA = 1;
  double currentG = 1;
 
  x = atof(argv[1]);
  y = atof(argv[2]);
  E = atof(argv[3]);
  
  A = (1/2)*(x+y);
  G = sqrt(x*y);
  
  int i = 0;
  do { 
    i++; 
   currentA = .5(A + G);
   currentG = sqrt(A * G);
  } while (fabs(currentA - currentG) >= E);
   if(fabs(currentA - currentG) <= E) {
    printf("M(%f,%f) = %f\n" x, y, currentA);
  }
return 0;
}
