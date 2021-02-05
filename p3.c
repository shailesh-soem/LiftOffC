//WAP to enter the radius of the circle and find its diameter ,circumference and area

#include<stdio.h>

void main(){

    float a,b,c,d;

    printf("Enter the radius of the circle : ");
    scanf("%f", &a);

    b = a*2;
    c = 2*3.14*a;
    d = 3.14*a*a;

    printf("Diameter of the circle : %f \n",b);
    printf("Circumference of the circle : %f \n",c);
    printf("Area of the circle : %f \n",d);

    return 0;
}