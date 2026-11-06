/* Write a program to calculate the 
sum of the numbers occuring in the 
multiplication table of 8*/

#include<stdio.h>

int main()
{
    int sum=0;
    for (int i; i<=10; i++)
    {
        sum +=(8*i);
    }
    printf("The sum of the table of 8 is %d",sum);
}
