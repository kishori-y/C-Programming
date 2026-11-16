/* Write a function slice() to slice a string.
It should change the original string such that
it is now the slicesed string.
Take m and n as the start and ending position for slice.*/

#include <stdio.h>

char* slice(char str[], int m, int n)
{
    int i=0, count;
    char *ptr1 = &str[m];
    char *ptr2 = &str[n];
    str = ptr1;
    str[n] = '\0';
    return str;
}

int main ()
{
    char str[] = "kishori yadav";
    printf("%s", slice(str, 1, 12));
    return 0;
}