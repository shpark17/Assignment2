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
  
  x = atof(argv[1]);
  y = atof(argv[2]);
  E = atof(argv[3]);
  
  A = (1/2)*(x+y);
  G = sqrt(x*y);
  n = fabs(A-G);
  
  for(i=1;i<n;i++) {
  
