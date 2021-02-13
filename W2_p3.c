//WAP to count the total number of words in a string

#include <stdio.h>

void main()
{
    char a[5000];
    int b,num = 0;

    printf("Type any string of your choice : \n");
    gets(a);

    for(b=0; a[b]; b++)
    {
        if(a[b]==' ')
        {
            num++;

        }
    }
    printf("The no. of words in the given string : %d",num+1);

    return 0;
    
}