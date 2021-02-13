#include<stdio.h>

void main()
{
    
    int a,b,size=5;
    
    
    for(a=0; a < size ;a++)
    {
        for(b=0; b < size ;b++)
        {
            
            if(a==b || b==(size-a-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

