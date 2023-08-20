#include <stdio.h>

void forL(void)
{
    printf("For loop\n");
}

int main(void)
{
    for(int i = 3; i > 0; i--)
    {
        forL();
    }
}