// If it's sunday & it's snowing, print true

#include <stdio.h>

int main()
{
    int isSunday, isSnowing;

    printf("Is it sunday?(1/0): ");
    scanf("%d", &isSunday);
    printf("Is it snowing?(1/0): ");
    scanf("%d", &isSnowing);

    printf("\n");

    printf("%d", isSunday && isSnowing);

    return 0;
}