#include <stdio.h>
int main() {
    int nums[] = {1,2,1};
    int n = 3;
    int total = 0;

    for (int i = 0; i < n; i++) {
        int freq[100] = {0};  
        int distinct = 0;

        for (int j = i; j < n; j++) {
            if (freq[nums[j]] == 0) {
                distinct++;
                freq[nums[j]] = 1;
            }
            total += distinct * distinct;
        }
    }
    printf("Sum: %d\n", total);
    return 0;
}