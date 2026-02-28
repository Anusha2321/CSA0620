#include <stdio.h>

int main() {
    int nums[] = {3,1,2,2,2,1,3};
    int n = 7;
    int k = 2;
    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] == nums[j] && (i * j) % k == 0)
                count++;
        }
    }

    printf("Pairs Count: %d\n", count);
    return 0;
}