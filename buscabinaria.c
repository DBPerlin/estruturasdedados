#include <stdio.h>

 int busca_binaria(int *v, int n, int x){
    int l = 0, r = n;
    while(l < r){
        int meio = (l+r)/2;
        if(x > v[meio]){
            l = meio+1;
        }
        else r = meio;
    }
    return l;
 }

int main(){

    int v[6] = {1, 2, 3, 4, 4, 5};

    printf("%d\n", busca_binaria(v, 6, 2));

    return 0;
}