// Write a c program to calculate area of a rectangle?
#include<stdio.h>
int main()
{
    int length,breath;
    printf("Enter Length: ");
    scanf("%d",&length);

    printf("Enter Breadth: ");
    scanf("%d",&breath);

    printf("Area of this rectangle is %d", length * breath);
    return 0;
}