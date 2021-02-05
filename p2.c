//WAP to enter temperature in celsius and convert it into farehenit

#include<stdio.h>

void main()

{

    float a,b;
    printf("Enter the temperature in celsius : ");
    scanf("%f", &a);

    b = a * 1.8 + 32;

    printf("Temperature in farheneit : %f",b);

    return 0;



}