#include <stdio.h>
int main(){
    
    int n;
    scanf("%d", &n);

    for(int i = 1; i<=n; i++){
        int k = 0;
        int j = 0;
        while(j<n-i){
            printf(" ");
            j++;
        }
        int h = (2*i-1);
        for(k = 0; k!=h; k++){
            printf("*");

        }
        printf("\n");
    }

    return 0;
}