/* which of the following is used to appropriately
read a multi-word string 
(a) gets()
(b) puts()
(c) printf()
(d) scanf()       */

#include<stdio.h>

int main ()
{
    char str[8];
    for (int i = 0; i < 7; i++)
    {
        scanf("%c", &str[i]);
        fflush(stdin);
    }
    str[7] = '\0';

    printf("%s", str);
    return 0;
}