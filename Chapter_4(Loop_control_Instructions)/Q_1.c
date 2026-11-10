/* Write a program to print multiplication table of
a given number n*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    for(int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n",n,i,n*i);
    }
    return 0;
}

/*  Write a program to print the address of a variable.
use this address to get the value of this variable 

#include<stdio.h>

int main()
{
    int i= 2;
    int* ptr = &i;
    printf("The address of i is %u \n",&i);
    printf("The value of i is %d \n",*ptr);
    return 0;
}*/