/*Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/

#include<stdio.h>
int main()
{
     int temp=0,p1=1,p2=1,sum=0;
     while(p1<=4000000)
    {
        if (p1%2==0)
        {
            sum=sum+p1;
        }
      temp = p1+p2;
      p1 = p2;
      p2 = temp ;
    }
    printf("The Sum of Even Fibonacci Terms is %d",sum); //Answer : 4613732
    return 0;
}
