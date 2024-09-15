// If it's monday or it's raining, print true

#include <stdio.h>

int main()
{
    int isMonday, isRaining;

    printf("Is it Monday?(1/0): ");
    scanf("%d", &isMonday);
    printf("Is it Raining?(1/0): ");
    scanf("%d", &isRaining);

    printf("\n");

    printf("%d", isMonday || isRaining);

    return 0;
}