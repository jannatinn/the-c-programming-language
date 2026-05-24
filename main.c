#include <stdio.h>

/* fahrenheit to celsius table */
main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 40;
    step = 4;

    printf("celsius =>   fahr\n");

    celsius = lower;
    while (celsius <= upper)
    {
        fahr = (celsius * (9.0 / 5.0)) + 32.0;
        printf("%7.0f    %6.2f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
