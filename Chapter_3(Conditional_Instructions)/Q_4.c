/* Write a program to determine 
Whethet a character entered by the user is 
lowercase or not.
https://www.asciii.com/ascii-table*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter The character: ");
    scanf("%c",&ch);
    printf("The value of character is %d \n", ch);
    //97 - 122

    if(ch>=97 && ch<=122)
    {
        printf("This character is lowercase \n");
    }
    else
    {
        printf("This character is not lowercase \n");
    }
    return 0;
}