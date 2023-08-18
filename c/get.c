#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string answer = get_string("what is your name? ");
    printf("Hello, %s\n", answer);
}

// clang -o get get.c -lcs50
// chmod +x get
// ./fileName