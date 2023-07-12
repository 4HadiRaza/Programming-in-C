#include <stdio.h>
#include <conio.h>

int main() {
    char ch;
    float num1, num2, result;
    printf("Enter an expression (e.g. 2 + 3.5 - 1): ");
    scanf("%f", &num1);
    while ((ch = getch()) != '=') {
        scanf("%f", &num2);
        switch (ch) {
            case '+':
                num1 += num2;
                break;
            case '-':
                num1 -= num2;
                break;
            case '*':
                num1 *= num2;
                break;
            case '/':
                num1 /= num2;
                break;
            default:
                printf("Invalid operator '%c'\n", ch);
                return 0;
        }
    }
    printf("Result: %.2f\n", num1);
    return 0;
}

