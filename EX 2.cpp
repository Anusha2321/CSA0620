#include <stdio.h>

int exists(int arr[], int size, int value) {
    for (int i = 0; i < size; i++)
        if (arr[i] == value)
            return 1;
    return 0;
}

int main() {
    int nums1[] = {2,3,2};
    int nums2[] = {1,2};
    int n = 3, m = 2;

    int answer1 = 0, answer2 = 0;

    for (int i = 0; i < n; i++)
        if (exists(nums2, m, nums1[i]))
            answer1++;

    for (int i = 0; i < m; i++)
        if (exists(nums1, n, nums2[i]))
            answer2++;

    printf("[%d, %d]\n", answer1, answer2);

    return 0;
}