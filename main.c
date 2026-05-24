#include <stdio.h>

/* fahrenheit to celsius table */
main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        /* digit before f is "atleast x spaces"; uses space */
        /* digit after . is "simply x spaces"; uses 0 */
        printf("%.2f\t%6f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
