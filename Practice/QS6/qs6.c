// Write a program to check if a number is even or odd

#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    printf("\n");
    if (a != 0 && a % 2 == 0)
    {
        printf("The number is even.");
    }
    else if (a % 2 != 0)
    {
        printf("The number is odd.");
    }
    else
    {
        printf("You entered 0.");
    }
}