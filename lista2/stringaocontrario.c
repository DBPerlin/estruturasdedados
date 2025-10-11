#include <stdio.h>

void imprime_reverso(const char *s) {
    if (*s == '\0' || *s == '\n') return;
    imprime_reverso(s + 1);
    putchar(*s);
}

int main(void) {
    char s[502];
    if (fgets(s, sizeof(s), stdin) == NULL) return 0;
    imprime_reverso(s);
    putchar('\n');
    return 0;
}