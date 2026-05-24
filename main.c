#include <stdio.h>

/* fahrenheit to celsius table */
main()
{
    int i, j;

    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }

    i = 1;
    j = 9;
    while (i < j)
        i = 2 * i;
}
