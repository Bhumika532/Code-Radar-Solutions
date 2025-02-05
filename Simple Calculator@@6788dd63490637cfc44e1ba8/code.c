#include <stdio.h>

int main() {
    int num1, num2, result;
    char operator;
    scanf("%d", &num1);
    scanf(" %c", &operator);  
    scanf("%d", &num2);

    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("%d", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d", result);
            break;
        case '/':
            if (num2 == 0) {
                printf("error\n");
            } else {
                result = num1 / num2;
                printf("%d", result);
            }
            break;
        default:
            printf("error");
    }

    return 0;
}
