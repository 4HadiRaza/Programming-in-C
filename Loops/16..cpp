#include <stdio.h>

int main() {
    int num1, num2, result = 0;
    char op;

    printf("Enter an expression: ");
    scanf("%d", &num1);

    while (1) {
        scanf(" %c", &op);
        if (op == '=') {
            break;
        }
        scanf("%d", &num2);

        switch (op) {
            case '+':
                result += num2;
                break;
            case '-':
                result -= num2;
                break;
            case '*':
                result *= num2;
                break;
            case '/':
                result /= num2;
                break;
            default:
                printf("Invalid operator!\n");
                return 0;
        }
    }

    printf("Result: %d\n", num1 + result);
    return 0;
}

