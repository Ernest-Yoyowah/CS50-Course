#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    float amount = get_float("Cedi amount: $");
    int dollar = round(amount *100);
    printf("Cedis: ¢%i\n", dollar);
}