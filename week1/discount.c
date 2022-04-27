#include <cs50.h>
#include <stdio.h>

float discount(float price, float percentage);

int main(void)
{
    float regular = get_float("Regular Price: ");
    float percentageOff = get_float("Percentage Off: ");
    float sale = discount(regular, percentageOff);
    printf("Sale Price: %.2f\n", sale);
}

float discount(float price, float percentage)
{
    return price * (100 - percentage) / 100;
}