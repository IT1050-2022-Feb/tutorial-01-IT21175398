/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h> //header
int main() {  //main func
  int n,count,sum =0;   //declare var

    printf ("Enter your end number:");  //user text
    scanf("%d", &n);  //user input

    for (count=1; count<= n; ++count){  // usinf for loop

      sum +=count;    //calc sum or numbers

    }

    printf("Sum is: %d ", sum); //output sum
  
  return 0; //end of main
}

