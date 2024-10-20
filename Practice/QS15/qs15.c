// Print the sum of Fisrt n Natural Number Also print in reverse
#include <stdio.h>

int main()
{
    int n, sum;
    printf("Enter a number:");
    scanf("%d", &n);
    printf("\n");

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("Sum of these numbers is: %d \n\n", sum);
    printf("In reverse: \n");

    for (int i = n; i > 0; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}