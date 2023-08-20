#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int points = get_int("How many points did you lose? ");
    //PT = number of points lost
    const int PT= 2;

    if(points < PT)
    {
        printf("You lost fewer points than me.\n");
    }
    else if(points > PT)
    {
        printf("I lost fewer points than you.\n");
    }
    else
    {
        printf("We lost the same points.\n");
    }
}