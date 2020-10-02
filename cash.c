#include <stdio.h>
#include <cs50.h>
#include <math.h>

//Asks user for amount of change they are owed and returns the number of coins they will recieve
int main(void)
{
    float x;
    do
    {
        x = get_float("Change owed: \n");
    }
    while(x < 0);

    int cents = round(x * 100); //convert amount entered to cents and rounds it to nearest penny
    int coins = 0; //Used to store the number of coins

    while (cents >= 25) //calculate number of quarters
    {
        cents = cents - 25;
        coins++;
    }
    while (cents >= 10 && cents < 25) //calculate number of dimes
    {
        cents = cents - 10;
        coins++;
    }
    while (cents >= 5 && cents < 10) //calculate number of nickels
    {
        cents = cents - 5;
        coins++;
    }
    while (cents >= 1 && cents < 5) //calculate number of pennys
    {
        cents = cents -1;
        coins++;
    }
    printf("%i\n", coins); //return number of coins the user will recieve
}