#include <stdio.h>

int main() {
    char s[10001];
    char stack[10001];
    int top = -1, i, valid = 1;

    scanf("%10000s", s);

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            stack[++top] = s[i];
        } else {
            if (top == -1) {
                valid = 0;
                break;
            }

            if ((s[i] == ')' && stack[top] == '(') ||
                (s[i] == ']' && stack[top] == '[') ||
                (s[i] == '}' && stack[top] == '{')) {
                top--;
            } else {
                valid = 0;
                break;
            }
        }
    }

    if (top != -1) {
        valid = 0;
    }

    if (valid) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
