#include <stdio.h>

int main()
{
    float num1, num2, result;
    char op;

    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the operation: ");
    scanf(" %c",&op);
    printf("Enater the second number: ");
    scanf("%f", &num2);

    switch (op)
    {
    case '+':
    {
        result = num1 + num2;
        printf("%f", result);
        break;
    }
    case '-':
    {
        result = num1 - num2;
        printf("%f", result);
        break;
    }
    case '*':
    {
        result = num1 * num2;
        printf("%f", result);
        break;
    }
    case '/':
    {
        result = num1 / num2;
        printf("%f", result);
        break;
    }
    case '%':
    {
        result = (int)num1 % (int)num2;
        printf("%d", (int)result);
       break;
    }
    default :
    {
        printf("The operator is not valid");
        break;
    }
    }
    return 0;
}