/* Write a program using recursion to  
calculate nth element of fibonacci series */

#include<stdio.h>

int fibonacci(int);
int fibonacci(int n)
{
    if(n == 1 || n == 2)
    {
        return n-1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144.....
int main()
{   
    int n = 17;
    printf("The value of fibonacci series at %d is %d",n , fibonacci(n));
    return 0;
}