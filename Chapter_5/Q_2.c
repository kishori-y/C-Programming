/* Write a function to convert celceius temperature into farenhit */

#include<stdio.h>

float c2f(float);

float c2f(float c)
{
    return ((9*c)/5)+32;
    //return ((9.0/5)*c)+32;
    //return (c*(9.0/5))+32;
}

int main()
{
    float c =45;
    printf("Celsius to Fahrenheit for %.2f is %.2f", c, c2f(c));
    return 0;
}