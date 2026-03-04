#include <stdio.h>
#include <string.h>

void largeGroups(char *s) {
    int n = strlen(s), start = 0;

    for (int i = 1; i <= n; i++) {
        if (s[i] != s[start]) {
            if (i - start >= 3)
                printf("[%d,%d] ", start, i - 1);
            start = i;
        }
    }
    printf("\n");
}

int main() {
    char s1[] = "abbxxxxzzy";
    char s2[] = "abc";

    largeGroups(s1);  
    largeGroups(s2);  

    return 0;
}