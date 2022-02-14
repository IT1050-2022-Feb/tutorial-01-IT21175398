/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>   //header
  int main(){   //main func

  int c, m, total=0;  //decalre var
    float avg=0;

      for(c=1; c<=2; c++){  //for loop
        printf ("Enter Student %d Marks:",c);
        scanf("%d",&m);
        
        total +=m; //calc total
        
      }
      
      avg= total/2; //calc avg
      printf("Student mark Average: %.2f \n",avg);  //print avg
    

  
  return 0;
}

