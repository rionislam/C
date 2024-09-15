// Write a program to give grades to a student
// marks < 33 F
// 33<=marks<40 D
// 40<=marks<50 C
// 50<=marks<60 B
// 60<=marks<80 A
// 80<=marks<=100 A++

#include <stdio.h>

int main()
{
    int x;
    printf("Enter marks(1-100): ");
    scanf("%d", &x);

    if (x < 33)
    {
        printf("F");
    }
    else if (x >= 33 && x < 40)
    {
        printf("D");
    }
    else if (x >= 40 && x < 50)
    {
        printf("C");
    }
    else if (x >= 50 && x < 60)
    {
        printf("B");
    }
    else if (x >= 60 && x < 80)
    {
        printf("A");
    }
    else if (x >= 80 && x <= 100)
    {
        printf("A++");
    }
    else
    {
        printf("Invalid number!");
    }

    return 0;
}