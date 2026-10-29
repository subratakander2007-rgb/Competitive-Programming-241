#include <stdio.h>

int main() {
    int n, i, j, target;
    int prices[10000];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (prices[i] + prices[j] == target) {
                printf("[%d, %d]\n", i, j);
                return 0;
            }
        }
    }

    printf("No solution\n");

    return 0;
}
