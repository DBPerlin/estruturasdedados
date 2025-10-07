#include <stdio.h>

void trocaxpory(char *str){
    if(*str == '\0'){
        return;
    }
    else if(*str == 'x') *str = 'y';
    
    trocaxpory(str+1);
}

int main(){
    char str[101];
    scanf("%s", str);
    trocaxpory(str);
    printf("%s", str);
    return 0;
}