#include <stdio.h>

int get_positive_number(void);
int get_sum_35(int n);

int main()
{
    int n = get_positive_number();
    int sum = get_sum_35(n);
    printf("The sum is: %i", sum);

}

int get_positive_number(void)
{
    int n;
    do
    {
        printf("Enter a positive number: ");
        scanf("%i", &n);
    } while (n < 1);
    return n;
}

int get_sum_35(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        int div3 = (i % 3 == 0);
        int div5 = (i % 5 == 0);

        if (div3 ^ div5)
        {
            sum += i;
        }
    }
    return sum;
}
