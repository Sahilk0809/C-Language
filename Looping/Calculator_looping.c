#include <stdio.h>

float add(float x, float y);
float subtract(float x, float y);
float multiply(float x, float y);
float divide(float x, float y);


main() 
{
    int choice;
    float num1, num2;

    printf("Welcome to the calculator!\n");

    while (1) 
    {
        printf("Please select an operation:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");

        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        if (choice == 5) 
        {
            printf("Thank you for using the calculator!\n");
            break;
        }

        printf("Enter the first number: ");
        scanf("%f", &num1);

        printf("Enter the second number: ");
        scanf("%f", &num2);

        switch (choice) 
        {
            case 1:
                printf("Result: %.2f\n", add(num1, num2));
                break;
            case 2:
                printf("Result: %.2f\n", subtract(num1, num2));
                break;
            case 3:
                printf("Result: %.2f\n", multiply(num1, num2));
                break;
            case 4:
                if (num2 != 0) {
                    printf("Result: %.2f\n", divide(num1, num2));
                } else {
                    printf("Cannot divide by zero\n");
                }
                break;
            default:
                printf("Invalid input. Please try again.\n");
        }
    }
}


float add(float x, float y) 
{
    return x + y;
}

float subtract(float x, float y) 
{
    return x - y;
}

float multiply(float x, float y) 
{
    return x * y;
}

float divide(float x, float y) 
{
    return x / y;
}

