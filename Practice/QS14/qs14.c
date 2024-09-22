// Print the number from 0 to n, if n is given by the user

#include <stdio.h>

int main()
{
    int i = 0;
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d \n", i);
        i++;
    }

    return 0;
}