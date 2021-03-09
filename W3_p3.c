//WAP to find GCD and LCM of two numbers using recursion

#include <stdio.h>

int GCD(int x, int y);  

int main()
{
   int num1, num2, gcd, lcm;

   printf("Enter any two positive integers :\n");
   scanf("%d %d", &num1, &num2);

   gcd = GCD(num1, num2);

   printf("GCD of given integers : %d", gcd);
   printf("\nLCM of given integers : %d", (num1 * num2) / gcd);

   return 0;
}

int GCD(int x, int y)
{
   if (y == 0)   
   {
      return x;
   }
   else 
   {
      return GCD(y, x % y);   
   }
}