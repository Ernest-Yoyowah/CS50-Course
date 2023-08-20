#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Enter a number: ");
    if(n % 2 == 0)
    {
        printf("%i is an even number\n", n);
    }
    else
    {
        printf("%i is an odd number\n", n);
    }
}