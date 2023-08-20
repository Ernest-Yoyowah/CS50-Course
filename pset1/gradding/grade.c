#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int mark = get_int("Enter your score: ");
    if(mark >= 80)
    {
        printf("Score: %i | Grade: A\n",mark );
    }
       else if(mark >= 70 && mark <= 79)
    {
        printf("Score: %i | Grade: B\n",mark);
    }
          else if(mark >= 60 && mark <= 69)
    {
        printf("Score: %i | Grade: C+\n",mark);
    }
          else if(mark >= 50 && mark <= 59)
    {
        printf("Score: %i | Grade: C-\n",mark);
    }
          else if(mark >= 40 && mark <= 49)
    {
        printf("Score: %i | Grade: D\n",mark);
    }
          else
    {
        printf("Score: %i | Grade: F\n",mark);
    }
}