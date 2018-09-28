/**
 *Author: SungHa Park
 *Date: 09/24/2018
 *This program finds the rate of decay of a radioactive isotope
 */
 
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc, char **argv) {
 
 double elementName, elementSymbol, halflife, initialMass;
 int atomicNumber;
 double remains;
 
 if(argc != 6) {
  return 1;
 }
  
 atomicNumber = atoi(argv[1]);
 halflife = atof(argv[4]);
 initialMass = atof(argv[5]);
 
 printf("%s (%d-%s)\n", argv[2], atomicNumber, argv[3]);
 printf("Year Amount");
 printf("---------------\n --\t %f", initialMass);

 int i = 1;
 for(i=1;i<=halflife;i++) {
  remains = initialMass * pow(.5, (i/halflife));
  printf("%f, %f\n", i, remains);
 }
 return 0;
}
