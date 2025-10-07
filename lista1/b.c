#include <stdio.h>

int main(){

    int n, m = 0;
    scanf("%d", &n);

    for(int i = 0; i<=n; i++){
        m = i;
        while(m!=0){
            m--;
            if(i>9){
                printf("%d ", i);
            }
            else{
            printf("0%d ", i);
            }
        }
        printf("\n");
    }
    
    printf("\n");

    for(int i = 1; i<=n; i++){
        for(int m = 1; m<=i; m++){
            if(m>9){
                printf("%d ", m);
            }
            else{
                printf("0%d ", m);
            }
        }
        printf("\n");
    }

    return 0;
}