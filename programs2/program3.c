#include <stdio.h>

int main() {
    int n, i, target;
    int arr[1000000];
    int low, high, mid, result = -1;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &target);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            result = mid;
            break;
        } else if (arr[mid] < target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    printf("%d\n", result);

    return 0;
}
