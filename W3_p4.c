//WAP to find the factorial of a number using recursion

#include<stdio.h>  
  
long fact_(int n)  
{  
  if (n == 0)  
    return 1;  
  else  
    return(n * fact_(n-1));  
}  
   
int main()  
{  
  int num;  
  long fact;  
  printf("Enter any positive integer : ");  
  scanf("%d", &num);   
   
  fact = fact_(num);  

  printf("Factorial of %d is : %ld \n", num, fact);  

  return 0;  
}  