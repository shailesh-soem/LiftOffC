//WAP to calculate sum of the digits of a number

#include <stdio.h>

void main()
{
    int a,sum = 0,b;
    printf("Enter any positive integer : \n");
    scanf("&d",&a);

    while(b>0)
    {
        a = b % 10;
        sum = sum + a;
        b = b/10;


    }
    printf("Sum of the digits of the given integer : %d\n",sum);

    return 0;


}