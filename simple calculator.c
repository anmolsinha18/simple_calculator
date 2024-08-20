// calculator.c
#include <stdio.h>

int main() {
    int num1, num2, result;
    char operation;

    printf("Enter a number: ");
    scanf("%d", &num1);

    printf("Enter an operation (+, -, *, /): ");
    scanf(" %c", &operation);

    printf("Enter another number: ");
    scanf("%d", &num2);

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("Invalid operation\n");
            return 1;
    }

    printf("Result: %d\n", result);

    return 0;
}
