#include <stdio.h>
int robLinear(int nums[], int start, int end) {
    int prev1 = 0, prev2 = 0, temp;
    for (int i = start; i <= end; i++) {
        temp = prev1;
        prev1 = (prev2 + nums[i] > prev1) ? prev2 + nums[i] : prev1;
        prev2 = temp;
    }
    return prev1;
}
int rob(int nums[], int size) {
    if (size == 1) return nums[0];

    int case1 = robLinear(nums, 0, size - 2);
    int case2 = robLinear(nums, 1, size - 1);

    return (case1 > case2) ? case1 : case2;
}
int main() {
    int nums1[] = {2,3,2};
    int nums2[] = {1,2,3,1};

    printf("%d\n", rob(nums1, 3));  
    printf("%d\n", rob(nums2, 4));  
    return 0;
}
