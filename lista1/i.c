#include <stdio.h>
#include <string.h>

char to_uppercase_manual(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 32;
    }
    return c;
}

int validar_sigla(const char *nome_aeroporto, const char *sigla) {
    int len_sigla_a_verificar = 3;
    
    if (sigla[2] == 'X') {
        len_sigla_a_verificar = 2;
    }
    
    int idx_sigla = 0;
    int idx_nome = 0;
    int len_nome = 0;
    
    while (nome_aeroporto[len_nome] != '\0') {
        len_nome++;
    }

    while (idx_nome < len_nome) {
        
        char char_sigla = sigla[idx_sigla]; 
        
        char char_nome_maiuscula = to_uppercase_manual(nome_aeroporto[idx_nome]);
        
        if (char_sigla == char_nome_maiuscula) {
            
            idx_sigla++;
            
            if (idx_sigla == len_sigla_a_verificar) {
                return 1;
            }
        }
        
        idx_nome++;
    }
    
    return 0;
}


int main() {
    char A[100001]; 
    char S[4];      

    if (scanf("%s", A) != 1 || scanf("%s", S) != 1) {
        return 1;
    }

    if (validar_sigla(A, S)) {
        printf("Sim\n");
    } else {
        printf("Nao\n");
    }

    return 0;
}