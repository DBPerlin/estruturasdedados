#include <stdio.h>

void troca(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selecao(int *v, int n){
    for(int j = 0; j < n-1; j++){
        int min = j;
        for(int i=j+1; i<n; i++){
            if(v[i]<v[min]){
                min = i;
            }
        }
        troca(&v[j], &v[min]);
    }
}

int main(){

    int v[7] = {4, 7, 3, 1, 8, 6, 2};
    selecao(v, 7);

    for(int i = 0; i<7; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
    return 0;
}