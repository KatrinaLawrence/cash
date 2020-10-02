#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float x;
    do
    {
        x = get_float("Change owed: \n");
    }
    while(x < 0);

    int cents = round(x * 100);

    int coins = round(cents / 25);

    cents = cents % 25;

    coins = coins + round(cents / 10);

    cents = cents % 10;

    coins = coins + round(cents / 5);

    cents = cents % 5;

    coins = coins + round(cents / 1);

    printf("%i\n", coins);
}