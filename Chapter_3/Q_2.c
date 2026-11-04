/* Calculate income tax paid anemployee 
to the goverment as per the slabs
mentioned below:

Income Slab             Tax     
2.5-5.0L                5%
5.0L-10.0L              20%
Above 10.0L             30%

Note that there is no tax below 205L.
 Take income amount as an input from the user.*/

 #include<stdio.h>
 int main()
 {
    int income;
    float tax=0;
    printf("Enter Income: ");
    scanf("%d", &income);
    if(income<=250000)
    {
        tax=0;
    }
    else if(income>250000 && income<=500000)
    {
        tax= 0.05*(income - 250000);
    }
    else if(income>50000 && income<=10000000)
    {
        tax=0.05*(50000-250000) + 0.2 * (income - 500000);
    }
    else 
    {
        tax=0.05*(50000 - 250000) + 0.2 * (100000 - 500000) + 0.3 * (income - 1000000);
    }
    printf("The total tax you need to pay is %.2f", tax);
    return 0;
 }