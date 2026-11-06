/* Write a program to sum frist 
10 natural numbers using  for loop*/

#include<stdio.h>
int main()
{
    int sum=0;
    for (int i = 1; i<= 10; i++)
    {
         sum +=i;
          
    }  
    printf("The sum of frist 10 natural numbers is %d", sum);
    
    return 0;
}