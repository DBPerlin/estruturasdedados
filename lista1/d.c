#include <stdio.h>

#define MAX_DISCIPLINAS 1000 

void inserir_ordenado(int vetor[], int *tamanho, int novo_codigo) {
    int i = *tamanho - 1;

    while (i >= 0 && vetor[i] > novo_codigo) {
        vetor[i + 1] = vetor[i];
        i--;
    }

    vetor[i + 1] = novo_codigo;
    (*tamanho)++;
}

int main() {
    int D; 

    if (scanf("%d", &D) != 1) {
        return 0;
    }

    int A, S, m; 
    
    while (scanf("%d %d %d", &A, &S, &m) == 3) {
        
        int max_reprovacoes = -1;
        int codigos_empatados[MAX_DISCIPLINAS]; 
        int k = 0;
        
        for (int i = 0; i < m; i++) {
            int codigo, matriculados, aprovados;
            
            if (scanf("%d %d %d", &codigo, &matriculados, &aprovados) != 3) {
                 break; 
            }
            
            int reprovacoes_atuais = matriculados - aprovados;
            
            if (reprovacoes_atuais > max_reprovacoes) {
                
                max_reprovacoes = reprovacoes_atuais;
                
                k = 0; 
                inserir_ordenado(codigos_empatados, &k, codigo);

            } else if (reprovacoes_atuais == max_reprovacoes) {
                
                inserir_ordenado(codigos_empatados, &k, codigo);
            }
        }
        
        printf("%d/%d\n", A, S);
        
        for (int i = 0; i < k; i++) {
            printf("%d ", codigos_empatados[i]);
        }
        
        printf("\n");
        
        printf("\n");
        
    }

    return 0;
}