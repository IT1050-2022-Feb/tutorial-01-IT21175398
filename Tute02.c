/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>  //header

int main() {  //main func

  float distance,amount;  //declare var

  printf("Enter the travel distance:"); //user text
  scanf("%f", &distance); //take user input

  if (distance<= 30){ //in condition
    amount= distance*50;  //calc standard amount
    
    }

  else{
    amount= distance* 30 + (distance-30)*40;  //calc over pay

  } 

  printf("Amount to be paid is: %.2f", amount); //output pay
  return 0; //end of main
}
