#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float regular = get_float("Regular Price: ");
    float promo = regular * .15;
    float sale = regular - promo ;
    printf("Sale Price: %.2f\n", sale);
}