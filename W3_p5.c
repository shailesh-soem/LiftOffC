//WAP to check whether a given number is palindrome or not using recusrion

#include<stdio.h>

int isPal(int num){

   static int reverse_num=0,rem;

   if(num!=0){
      rem=num%10;
      reverse_num=reverse_num*10+rem;
      isPal(num/10);
   }

   return reverse_num;
}
int main(){
   int num, reverse_num;

   printf("Enter any positive integer : ");
   scanf("%d",&num);

   reverse_num = isPal(num);

   if(num==reverse_num)
      printf("Yaass,%d is a palindrome!",num);
   else
      printf("Oh no,%d is NOT a palindrome!",num);

   return 0;
}