#include <stdio.h>

int main()
{
    int a, b;
    char op;

    scanf("%d %d %c", &a, &b, &op);

    switch(op)
    {
        case '+':
            printf("%d", a + b);
            break;

        case '-':
            printf("%d", a - b);
            break;

        case '*':
            printf("%d", a * b);
            break;

        case '/':
            if(b != 0)
                printf("%d", a / b);
            else
                printf("Division by zero not possible");
            break;

        case '%':
            if(b != 0)
                printf("%d", a % b);
            else
                printf("Division by zero not possible");
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}