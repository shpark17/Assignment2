/**
 *Author: SungHa Park
 *Date: 09/24/2018
 *This program finds the rate of decay of a radioactive isotope
 */
 
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc, char **argv) {
 
 double atomicNumber, elementName, elementSymbol, halflife, initialMass;
 double remains, years;
  
 atomicNumber = atoi(argv[1]);
 halflife = atof(argv[4]);
 initialMass = atof(argv[5]);
 printf("%s", argv[2]);
 printf("%s", argv[3]);
 
 int i = 0;
 for(i=0;i<=halflife;i++) {
  remains = initialMass * pow(.5, (i/halflife));
 }
 printf("%s (%d-%s)\n", argv[2], atomicNumber, argv[3]);
 printf("Year Amount\n %f, %f\n", years, remains);
 return 0;
}
