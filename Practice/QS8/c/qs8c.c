// If a number is greater than 9 and less than 100, print true. (2 digit number)

#include <stdio.h>

int main()
{
    int x;
    printf("Enter number: ");
    scanf("%d", &x);
    printf("\n");

    printf("%d", x > 9 && x < 100);

    return 0;
}