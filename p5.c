//WAP to check whether an alphabet is vowel or consonant using switch case

#include<stdio.h>

void main(){

    char alpha;

    printf("Enter any english alphabet : ");
    scanf("%c",&alpha);

    switch (alpha)
    {
    case 'a' :
        printf("It's a voewel!");
        break;
    case 'A' :
        printf("It's a vowel!");
        break;
    case 'e' :
        printf("It's a vowel!");
        break;
    case 'E' :
        printf("It's a vowel!");
        break;
    case 'i' :
        printf("It's a vowel!");
        break;
    case 'I' :
        printf("It's a vowel!");
        break;
    case 'o' :
        printf("It's a vowel!");
        break;
    case 'O' :
        printf("It's a vowel!");
        break;
    case 'u' :
        printf("It's a vowel!");
        break;
    case 'U' :
        printf("It's a vowel!");
        break;           
    default:
        printf("It's a consonant!");
        break;
    }
}