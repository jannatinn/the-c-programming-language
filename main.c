#include <stdio.h>

/* fahrenheit to celsius table */
main()
{
    int /* in between gaps*/ fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        /* where tabs can appear? (tabs for indentation) */ printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}
