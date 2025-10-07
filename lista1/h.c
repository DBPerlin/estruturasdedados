struct tipoBanda {
    char nome[80];
    int ano;
};

struct tipoShow {
    char nome[80];
    int qtd;
    struct tipoBanda bandas[100];
};

int saoIguais(const char *str1, const char *str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0;
        }
        i++;
    }
    return (str1[i] == '\0' && str2[i] == '\0');
}

void pesquisarNomeBanda(char pesquisa[80], struct tipoShow shows[50], int n) {
    int banda_encontrada = 0;

    for (int i = 0; i < n; i++) {
        struct tipoShow show_atual = shows[i];
        
        for (int j = 0; j < show_atual.qtd; j++) {
            
            struct tipoBanda banda_atual = show_atual.bandas[j];
            
            if (saoIguais(pesquisa, banda_atual.nome)) {
                
                printf("%s : ano %d\n", show_atual.nome, banda_atual.ano);
                
                banda_encontrada = 1;
            }
        }
    }

    if (banda_encontrada == 0) {
        printf("Banda nao cadastrada\n");
    }
}