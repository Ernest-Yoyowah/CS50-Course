#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("First Name: ");
    printf("Hello Mr.%s\n", name);
}