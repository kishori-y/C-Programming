/* Create an Array of 10 numbers. verify using pointer arithmatic that (ptr+2) points to the third
 element where ptr is a pointer pointing to the frist
  element of the Array */

  #include <stdio.h>
  int main()
  {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = a;

    printf("The value at address %u is %d",ptr+2, *(ptr+2));

    return 0;
  }