#include <stdio.h>
#include <math.h>

void get_positive_numbers(float *principal, float *rate, int *time);
float interest_calc(float principal, float rate, int time);
void results(float amount);

int main()
{
    float principal, rate, amount;
    int time;
    get_positive_numbers(&principal, &rate, &time);
    amount = interest_calc(principal, rate, time);
    results(amount);

    return 0;
}

void get_positive_numbers(float *principal, float *rate, int *time)
{
    do
    {
        printf("Enter the value of principal, rate and for how many months you want to calculate, separated by spaces: ");
        scanf("%f %f %i", principal, rate, time);
    } while 
    (*principal <= 0 || *rate <= 0 || *time <= 0);
}

float interest_calc (float principal, float rate, int time)
{
    int amount = principal * pow((1 + rate), time);
    return amount;
}

void results(float amount)
{
    printf("The result of the investiment is: %.2f", &amount);
}

