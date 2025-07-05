#include <cs50.h>
#include <stdio.h>

int get_positive_int(void);

int main(void)
{
    int height = get_positive_int();
}

int get_positive_int(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    } 
    while (n < 1);
}