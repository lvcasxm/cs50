#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    char c = get_char("Do you agree? ");

    if (c == 'y') {
        printf("Agreed.");
    } else if (c == 'n') {
        printf("Denied.");
    }

    return 0;
}