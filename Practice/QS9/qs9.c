// Write a program to check if a student passed or failed. (Pass mark is 33)

#include <stdio.h>

int main()
{
    char name[16];
    int x;

    printf("Enter student's name: ");
    scanf("%s", &name);
    printf("Enter marks(0-100): ");
    scanf("%d", &x);

    printf("\n");
    if (x >= 33)
    {
        printf("%s has passed.", name);
    }
    else
    {
        printf("%s has failed!", name);
    }

    return 0;
}