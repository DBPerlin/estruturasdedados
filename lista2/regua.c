#include <stdio.h>

void regua(int n) {
    if (n == 0) return;
    regua(n - 1);

    putchar('.');
    for (int i = 0; i < n; i++) {
        putchar('-');
    }
    putchar('\n');

    regua(n - 1);
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    regua(n);
    return 0;
}