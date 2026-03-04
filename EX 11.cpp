#include <stdio.h>
#include <string.h>
int findPaths(int m, int n, int N, int i, int j) {
    int dp[MAX][MAX] = {0}, temp[MAX][MAX];
    int count = 0;
    
    dp[i][j] = 1;

    for (int step = 1; step <= N; step++) {
        memset(temp, 0, sizeof(temp));

        for (int r = 0; r < m; r++) {
            for (int c = 0; c < n; c++) {
                if (dp[r][c] > 0) {
                    int val = dp[r][c];

                    if (r == 0) count += val;
                    else temp[r-1][c] += val;

                    if (r == m-1) count += val;
                    else temp[r+1][c] += val;

                    if (c == 0) count += val;
                    else temp[r][c-1] += val;

                    if (c == n-1) count += val;
                    else temp[r][c+1] += val;
                }
            }
        }

        memcpy(dp, temp, sizeof(dp));
    }

    return count;
}

int main() {
    printf("%d\n", findPaths(2,2,2,0,0));   
    printf("%d\n", findPaths(1,3,3,0,1));   
    return 0;
}