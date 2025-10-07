#include <stdio.h>

long int vetor[81] = {0};

long int fibonacci(int n){
    if (vetor[n] != 0){
        return vetor[n];
    }

    if(n==1 || n==2) return 1;
    return vetor[n] = fibonacci(n-1) + fibonacci(n-2);

}

// int main(){
//     int n;
//     scanf("%d", &n);
//     printf("%ld\n", fibonacci(n));
    
//     return 0;
// }