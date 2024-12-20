#include <stdio.h>

int main() {
    char operator;
    double num1, num2;
    do {
        printf("Enter an operator (+, -, *, /): ");
        scanf("%c", &operator);
        printf("Enter two operands: ");
        scanf("%lf %lf", &num1, &num2);

        switch (operator) {
            case '+':
                printf("%.1lf + %.1lf = %.1lf\n", num1, num2, num1 + num2);
                break;
            case '-':
                printf("%.1lf - %.1lf = %.1lf\n", num1, num2, num1 - num2);
                break;
            case '*':
                printf("%.1lf * %.1lf = %.1lf\n", num1, num2, num1 * num2);
                break;
            case '/':
                printf("%.1lf / %.1lf = %.1lf\n", num1, num2, num1 / num2);
                break;
            default:
                printf("Invalid operator. Try again.\n");
        }
    } while (operator != 'q');

    return 0;
}
