#include <stdio.h>
#include <math.h>

void get_positive_ints(int *n, int *j, int *k);
void menu(int n, int j, int k);

int main()
{
    int n, j, k;
    get_positive_ints(&n, &j, &k);
    menu(n, j, k);

    return 0;

}

void get_positive_ints(int *n, int *j, int *k)
{
    do
    {
        printf("Enter three positive numbers separated by spaces: ");
        scanf("%i %i %i", &n, &j, &k);
    } while 
    (*n < 1 || *j < 1 || *k < 1);
}

void menu(int n, int j, int k)
{
    int options;
    float geometric, weighteda, harmonic, arithmetic;

    printf("1: geometric mean\n"
           "2: weighted arithmetic mean\n"
           "3: harmonic mean\n"
           "4: arithmetic mean\n"
           "Your choice: ");
        scanf("%i", &options);

    switch(options)
    {
        case 1:
        geometric = pow(n * j * k, 1.0 / 3.0);
        printf("The geometric mean of the three numbers is: %.2f\n", geometric);
        break;

        case 2:
        weighteda = (n * 1 + j * 2 + k * 3) / 6;
        printf("The weighted arithmetic mean of the three numbers is: %.2f\n", weighteda);
        break;

        case 3:
        harmonic = 3.0 / (((1.0 / n) + (1.0 / j) + 1.0 / k)); 
        printf("The harmonic mean of the three numbers is: %.2f\n", harmonic);
        break;

        case 4:
        arithmetic = (n + j + k) / 3.0;
        printf("The arithmetic mean of the three numbers is: %.2f\n", arithmetic);
        break;

        default: 
        printf("Invalid option.\n");
        break;
    }
}



