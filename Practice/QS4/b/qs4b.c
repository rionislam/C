// Solve: 5*2/2*3

#include <stdio.h>

int main()
{
    int a = 5 * 2 / 2 * 3; //"*" and "/" have the same priority. So the calulation will be from left to right

    printf("%d", a);
    return 0;
}