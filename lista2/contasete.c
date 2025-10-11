#include <stdio.h>

int conta7_str(const char *s) {
    if (*s == '\0') return 0;
    return (*s == '7' ? 1 : 0) + conta7_str(s + 1);
}

int main(void) {
    char s[32];
    if (scanf("%31s", s) != 1) return 0;
    printf("%d\n", conta7_str(s));
    return 0;
}