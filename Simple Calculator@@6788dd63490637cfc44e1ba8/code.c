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
            printf("%d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d\n", result);
            break;
        case '/':
            if (num2 == 0) {
                printf("error\n");
            } else {
                result = num1 / num2;
                printf("%d\n", result);
            }
            break;
        default:
            printf("error\n");
    }

    return 0;
}
