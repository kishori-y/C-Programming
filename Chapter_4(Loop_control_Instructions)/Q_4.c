/* Write a program to sum frist 
10 natural numbers using d0 while loop*/

#include<stdio.h>
int main()
{
    int i=1;
    int sum=0;
    do
    {
         sum +=i;
         i++;
    } while (i<=10);
    printf("The sum of frist 10 natural numbers is %d", sum);
    
    return 0;
}