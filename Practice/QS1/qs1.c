// Write a program to calculate are of a square. (Side is given)

#include <stdio.h>

int main()
{
    int side;
    printf("Enter side: ");
    scanf("%d", &side);
    if (side > 0)
    {
        printf("Area is %d", side * side);
    }
    else
    {
        printf("Area is 0");
    }

    return 0;
}
