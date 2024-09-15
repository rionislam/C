// Write a program to it a number is divisible by 2 or not.

#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);

    printf("\n");
    if (a != 0 && a % 2 == 0)
    {
        printf("The number is divisible by 2");
    }
    else
    {
        printf("The number is not divisible by 2");
    }
    return 0;
}