//WAP to enter two numbers and perform all arithmetic operationsd

#include <stdio.h>

void main() {

int a,b,c,d,e,f,g,h,i;
printf("Enter any two integers : \n");
scanf("%d %d", &a, &b);
c = a+b;
d = a-b;
e = a*b;
f = a/b;
g = a%b;
h = ++a;
i = --b;

printf("Addition of two integers : %d \n",c);
printf("Subtraction of two integers : %d \n",d);
printf("Multiplication of two integers : %d \n",e);
printf("Divison of two integers : %d \n",f);
printf("Remainder of two integers : %d \n",g);
printf("New value of a : %d \n",h);
printf("New value of b : %d \n",i);

return 0;


}