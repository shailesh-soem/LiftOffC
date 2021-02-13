//WAP to find the largest and smallest element in an array

#include <stdio.h>

int main()
{
    int arr[100], a, b, min, max;

    printf("Enter the no. of elements to be inserted in the array : ");
    scanf("%d", &a);

    for (b = 0; b < a; b++)
    {
        printf("Enter element no. %d : ", b + 1);
        scanf("%d", &arr[b]);
    }

    min = arr[0];
    max = arr[0];

    for (b = 1; b < a; b++)
    {
        if (arr[b] < min)
        {
            min = arr[b];
        }
        
        if (arr[b] > max)
        {
            max = arr[b];
        }
    }

    printf("\nLargest element in the array : %d", max);
    printf("\nSmallest element in the array : %d", min);

    return 0;
}