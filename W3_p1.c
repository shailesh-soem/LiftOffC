//WAP to find the square of any number using any function

#include <stdio.h>

float square(float num)
{
    return (num * num);
}
int main()
{
    int num;
    float n;	
     
    printf("Enter any number : ");
    scanf("%d", &num);

    n = square(num);

    printf("The square of %d is : %.2f\n", num, n); 

    return 0;
}