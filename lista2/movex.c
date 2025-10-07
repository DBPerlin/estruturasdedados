#include <stdio.h>

void movexs(char *str, char *aux, int *pos){
    if (*str=='\0') return;

    if(*str != 'x') aux[(*pos)++] = *str;
    movexs(str+1, aux, pos);

    if(*str == 'x') aux[(*pos)++] = 'x';

}

int main(){
    char str[101] = {'\0'};
    char aux[101] = {'\0'};
    int pos = 0;
    scanf("%s", str);
    movexs(str, aux, &pos);
    printf("%s\n", aux);

    return 0;
}