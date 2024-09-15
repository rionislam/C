// Write a Program to find if a caracter entered by user is upper case or not.

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a caracter: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Caracter is uppercase.");
    }
    else
    {
        printf("Caracter is lowercase.");
    }
}