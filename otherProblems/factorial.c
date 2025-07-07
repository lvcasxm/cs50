#include <stdio.h>

int get_positive_number(void);
int get_factorial(int n);

int main()
{
    int n = get_positive_number();
    int factorial = get_factorial(n);
    printf("The factorial of %i is: %i", n, factorial);

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

int get_factorial(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}