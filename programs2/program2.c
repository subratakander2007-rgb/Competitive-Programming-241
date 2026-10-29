#include <stdio.h>

int main() {
    int n, i, j, count = 0, found;
    int arr[100000], result[100000];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        found = 0;

        for (j = 0; j < count; j++) {
            if (arr[i] == result[j]) {
                found = 1;
                break;
            }
        }

        if (found == 0) {
            result[count] = arr[i];
            count++;
        }
    }

    for (i = 0; i < count; i++) {
        printf("%d ", result[i]);
    }

    printf("\n");

    return 0;
}
