#include <cs50.h>
#include <stdio.h>

int get_positive_int(void);
void build_pyramid(int n);

int main(void)
{
    int height = get_positive_int();
    build_pyramid(height);

    return 0;
}

int get_positive_int(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    } 
    while (n < 1);
    return n;
}

void build_pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
    for (int k = 0; k <= i; k++)
    {
        printf("#");
    }
    printf("\n");
}
}