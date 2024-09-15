// Solve: 5*(2/2)*3

#include <stdio.h>

int main()
{
    int a = 5 * (2 / 2) * 3; // "()" has the higher priority. So, the calculation inside "()" will be done first
    printf("%d", a);
    return 0;
}