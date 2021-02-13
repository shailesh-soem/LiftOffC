//WAP to print the sum of all the even elements and even position elements in an array.

#include <stdio.h>
    
void main()
{
    int a,b,c=0,d=0;
    
    printf("Enter the no. of elements to be inserted in the array : ");
    scanf("%d",&b);

    int n[b];
    printf("Enter any %d elements in the array :\n",b);

    for(a=0;a<b;a++)
    {
        scanf("%d",&n[a]);
    }
    for(a=0;a<b;a++)
    {
        if(n[a]%2==0)
        c+=n[a];
        
        if((a+1)%2==0)
        d+=n[a];
    }
    printf("Sum of even elements: %d\n",c);
    printf("Sum of even position elements: %d\n",d);

    return 0;
}