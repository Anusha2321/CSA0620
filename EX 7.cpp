#include <stdio.h>

int main() {
    int arr[] = {3, 7, 3, 5, 2, 5, 9, 2};
    int n = 8;

    int unique[n];
    int k = 0;

    for (int i = 0; i < n; i++) {
        int found = 0;

        for (int j = 0; j < k; j++) {
            if (arr[i] == unique[j]) {
                found = 1;
                break;
            }
        }

        if (!found) {
            unique[k++] = arr[i];
        }
    }

    printf("Unique elements: ");
    for (int i = 0; i < k; i++)
        printf("%d ", unique[i]);

    return 0;
}