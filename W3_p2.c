//WAP to calculate the factorial of a number using functions

#include<stdio.h>
#include<math.h>

int main()
{
    printf("Enter any positive integer : ");
    printf("Factorial of the given integer is : %d \n ",fact_());
    return 0;
}

int fact_()
{
    int i,fact=1,n;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }

    return fact;

}

