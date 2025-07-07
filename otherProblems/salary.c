#include <stdio.h>

void menu(void);

int main()
{
    menu();
    return 0;
}

void menu (void)
{
    float salary, new_salary, vacation, thirteen;
    int months, options;
    printf("1: new salary\n"
           "2: vacation\n"
           "3: 13th month pay\n"
           "4: exit\n"
           "Enter your option: ");
    scanf("%i", &options);

    switch(options)
    {
        case 1: 
        do
        {
            printf("Enter your actual salary: " );
            scanf("%f", &salary);
        } while (salary < 1);

        if (salary < 999.99)
        {
            new_salary = salary + (salary * 0.15);
        } else if (salary <= 2000)
        {
            new_salary = salary + (salary * 0.10);
        } else 
        {
            new_salary = salary + (salary * 0.05);
        }
        printf("Your new salary is: %.2f", new_salary);
        break;

        case 2: 
        do
        {
            printf("Enter your actual salary: ");
            scanf("%f", &salary);
        } while (salary < 1);

        vacation = salary + (salary / 3);
        printf("The vacation pay is: %.2f", vacation);
        break;

        case 3:
        do
        {
            printf("Enter you actual salary and for how many months you've been working at the company: ");
            scanf("%f &i", &salary, &months);
        } while (salary < 1 || months < 1 || months > 12);
        
        thirteen = (salary * months) / 12;
        printf("Your 13th pay is: %.2f", thirteen);    
        break;

        case 4:
        printf("Exit the program.\n");
        break;

    default:
    printf("Invalid option.\n");
    }
}