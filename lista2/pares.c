#include <stdio.h>

int conferepares(char *str) {
    if (str[0] == '\0' || str[1] == '\0' || str[2] == '\0') {
        return 0;
    }
    int encontrou = (str[0] == str[2]);
    return encontrou + conferepares(str + 1);
}

int main() {
    char str[201];

    scanf("%200s", str);

    printf("%d\n", conferepares(str));
    return 0;
}