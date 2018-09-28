/**
 *Author: SungHa Park
 *Date: 09/24/2018
 *This program compute and print correct average rainfall
 */
 
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc, char **argv) {
 
 double averageRainFall, totalRain, rainfall; 
 
 int i = 0;
 while(rainfall != 99999) {
  
   printf("Enter the rainfall of this day:\n");
   scanf("%lf", rainfall);
  printf("%f", rainfall);
  
  if(rainfall == 99999) {
   break;
  }
  if(rainfall != 99999 && rainfall>0) {
   totalRain = rainfall + totalRain;
   i++;
  }  
 } 
   averageRainFall = totalRain/i;
printf("Average Rainfall: %f\n", averageRainFall);
  return 0;
}
    
    
 /**
 user input 
 check if 99999 what happen - end 
 if not what happen - keep going 
 
 loop(){
  user input 
  check if 99999  -what happen =- end 
  if not - keep going - iterate count - 
 
 }
  compute average. 
  */
  
   
   
