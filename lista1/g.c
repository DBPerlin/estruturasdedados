#include <stdio.h>

int main() {
    char nome_completo[101];
    char nome[101];
    char sobrenome[101];

    int i = 0;
    int j = 0;

    scanf("%[^\n]", nome_completo);

    while (nome_completo[i] != ' ' && nome_completo[i] != '\0') {
        char c = nome_completo[i];
        
        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }
        
        nome[j] = c;
        
        i++;
        j++;
    }
    nome[j] = '\0'; 

    j = 0; 
    int ultimo_espaco = -1;
    int k = i; 
    
    while (nome_completo[k] != '\0') {
        if (nome_completo[k] == ' ') {
            ultimo_espaco = k;
        }
        k++;
    }

    if (ultimo_espaco != -1) {
        i = ultimo_espaco + 1;
    } 
    
    while (nome_completo[i] != '\0') {
        char c = nome_completo[i];

        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }
        
        sobrenome[j] = c;
        
        i++;
        j++;
    }
    sobrenome[j] = '\0';
    
    printf("%s", nome); 
    printf("."); 
    printf("%s", sobrenome); 
    printf("@unb.br\n");

    return 0;
}