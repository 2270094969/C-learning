#include <stdio.h>
#include <stdlib.h>

int prime(int n);

int main(void)
{
    int a, s, casenum = 0;
    if (scanf("%d", &s) != 1) {
        return 1;
    }

    for (a = 2; a <= s / 2; a++) {
        if (prime(a) && prime(s - a)) {
            printf("case%d:%d=%d+%d\n", casenum, s, a, s - a);
            casenum++;
        }
    }

    return 0;
}

int prime(int n)
{
    if (n < 2) {
        return 0;
    }

    for (int t = 2; t <= n / 2; t++) {
        if (n % t == 0) {
            return 0;
        }
    }

    return 1;
}