#include <stdio.h>

void whileLoop(void)
{
    printf("while loop\n");
}

int main(void)
{
    int i = 0;
    while(i < 3)
    {
        whileLoop();
        i++;
    }
}