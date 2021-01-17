/* 
Q1. If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include<stdio.h>

int main(void) {
  int lim=0, sum=0;
    for(lim=0;lim<1000;lim++)
    {
        if((lim%3==0)||(lim%5==0))  // finding multiples of 3 or 5
        {
            sum=sum+lim;
        }
    }
printf("Sum of Multiples of 3 or 5 = %d",sum);  // printing final result
return 0;
}
