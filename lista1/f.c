#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DIM 30 
#define MAX_BILHETES 500

typedef struct {
    char fila_letra;
    int lugar_numero;
} Bilhete;

int main() {
    int F, L; 
    
    scanf("%d %d", &F, &L);

    int linhas_matriz = F + 1;
    int colunas_matriz = L + 1;
    
    int sala_estado[MAX_DIM][MAX_DIM] = {0}; 
    
    Bilhete bilhetes[MAX_BILHETES];
    int N_bilhetes = 0;
    
    char letra_lida;
    int numero_lido;
    
    while (scanf(" %c%d", &letra_lida, &numero_lido) == 2 && N_bilhetes < MAX_BILHETES) {
        bilhetes[N_bilhetes].fila_letra = letra_lida;
        bilhetes[N_bilhetes].lugar_numero = numero_lido;
        N_bilhetes++;
    }

    for (int k = 0; k < N_bilhetes; k++) {
        char fila_letra = bilhetes[k].fila_letra;
        int lugar_numero = bilhetes[k].lugar_numero;

        int j = lugar_numero;
        int i = F - (fila_letra - 'A');
        
        sala_estado[i][j] = 1; 
    }

    for (int i = 0; i < linhas_matriz; i++) {
        for (int j = 0; j < colunas_matriz; j++) {
            
            if (i == 0 && j == 0) {
                printf("   "); 
            } else if (i == 0) {
                printf(" %02d", j); 
            } else if (j == 0) {
                char letra_fila = ('A' + F) - i;
                printf("%c", letra_fila); 
            } else {
                if (sala_estado[i][j] == 1) {
                    printf(" XX");
                } else {
                    printf(" --");
                }
            }
        }
        printf("\n");
    }

    return 0;
}