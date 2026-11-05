// Which of the following is invalid in c?
//1. int a; b=a;
//2. int v = 3^3;
//3. char dt= '21 dec 2020';
#include<stdio.h>
int main()
{
    //int a, b=a; (wrong)
    int a;
    int b=a;

    int v= 3*3;
    //char dt = '21 dec 2020'; (wrong)
    return 0;
}