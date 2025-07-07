#include <stdio.h>

int get_positive_int(void);
int odd_numbers_to_n(int n);

int main()
{
    int n = get_positive_int();
    int sum = odd_numbers_to_n(n);

    printf("The sum of all odd numbers up to %i is: %i", n, sum);

    return 0;
}

int get_positive_int(void)
{
    int n;
    do
    {
        printf("Submit a positive number: ");
        scanf("%i", &n);
    } while (n < 1);
    return n;
}

int odd_numbers_to_n(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    return sum;
}