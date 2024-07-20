#include "main.h"
#include <stdio.h>

/**
 * main - print.
 *
 * Return: Always 0.
 */

void main(void)
{
    double n = 612852475143;
    while (n % 2 == 0) {
        printf("%d \n", 2);
        n = n / 2;
    }

    for (int i = 3; i * i <= n; i = i + 2) {
        while (n % i == 0) {
            printf("%d \n ", i);
            n = n / i;
        }
    }

    if (n > 2)
        printf("%d \n", n);
}
