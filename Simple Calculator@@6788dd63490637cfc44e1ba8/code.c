#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    char ch;
    scanf("%c", &ch); 

    switch (ch) {
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
            if (b != 0)
                printf("%d", a / b);
            else
                printf("error");
            break;
        default:
            printf("error");
            break;
    }
    return 0;
}