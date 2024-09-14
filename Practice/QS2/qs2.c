// Write a program to calculate area of a circle. (Radius given)

#include <stdio.h>

int main()
{
    int pie = 3.1416;
    int rad;
    printf("Enter radius: ");
    scanf("%d", &rad);
    printf("\n");

    if (rad != 0)
    {

        printf("Area is %d", pie * rad * rad);
    }
    else
    {
        printf("Area is 0");
    }

    return 0;
}