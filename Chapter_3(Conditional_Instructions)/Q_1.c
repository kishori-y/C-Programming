/* Write a program to find out Whether a student is pass or fail;
 if it requires total 40% and at least 33% in each subject to pass.
 Assume 3 subjects and take marks as an input from the user?
 */

 #include<stdio.h>
 int main()
 {
    int marks1, marks2, marks3;
    printf("Enter marks1: ");
    scanf("%d", &marks1);

    printf("Enter marks2: ");
    scanf("%d", &marks2);

    printf("Enter marks3: ");
    scanf("%d", &marks3);

    printf("The marks are %d %d and %d \n", marks1, marks2, marks3 );

    if(marks1<33 || marks2<33 || marks3<33)
    {
        printf("You are faild due to less marks in individual subject(s) \n");
    }
    else if((marks1 + marks2 + marks3)/3 <40)
    {
        printf("You are failed due to less percentage \n");
    }
    else
    {
        printf("You are passed!");
    }
    
    return 0;
 }