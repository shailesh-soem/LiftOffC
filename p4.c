//WAP to take input of marks of five subjects and calculate percentage and grade accordingly

#include<stdio.h>

void main(){

    float a,b,c,d,e,f;
    printf("Enter marks obtained in  Physics(out of 100) : \n");
    printf("Enter marks obtained in  Chemistry(out of 100) : \n");
    printf("Enter marks obtained in  Biology(out of 100) : \n");
    printf("Enter marks obtained in  Mathematics(out of 100) : \n");
    printf("Enter marks obtained in  Computer(out of 100) : \n");
    
    scanf("%f %f %f %f %f", &a,&b,&c,&d,&e);

    f = (a+b+c+d+e)/500 * 100;

    printf("Percentage secured is : %f \n",f);

    if(f>=90){
        printf("Grade obtained is A");
    }
    else if (f>=80 && f<90)
    {
        printf("Grade obtained is B");
    }
    else if (f>=70 && f<80)
    {
        printf("Grade obtained is C");
    }
    else if (f>=60 && f<70)
    {
        printf("Grade obtained is D");
    }
    else if (f>=40 && f<60)
    {
        printf("Grade obtained is E");
    }
    else if (f<40)
    {
        printf("Grade obtained is F");
    }
    
    else{
        printf("Invalid!");
    }
    

    return 0;

}