/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>  //header

int minimum(int a, int b); 
int maximum(int x, int y);  //user defined func
int multiply(int j, int k);

int main() {  //main func
   int no1, no2;    //declare var

   printf("Enter a value for no 1 : "); //user text
   scanf("%d", &no1); //user input
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);

   printf("%d ", minimum(no1, no2));  //print output
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));

   return 0;  //end of main
}

int minimum(int a, int b){  //min func
  int output;

  output = (a < b) ? a : b;
  return output;
}

int maximum(int x, int y){  //max func
  int result;

  result = (x > y? x : y);
  return result;
}

int multiply(int j, int k){ //mul func
  int output;

  output = j*k;
  return output;
}
