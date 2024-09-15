// Solve: 5+2/2*3

#include <stdio.h>

int main()
{
    int a = 5 + 2 / 2 * 3; // "/" and "*" have the same priority. So it will be calculated from left to right. The the "+" will be calculated
    printf("%d", a);
    return 0;
}