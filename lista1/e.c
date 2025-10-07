#include <stdio.h>
#include <stdlib.h>

char mapa[1000][1000];
int visitado[1000][1000];
int M = 0;
int N = 0;

int total_buracos = 0; 
int destino_alcancado = 0; 

int dr[] = {0, 0, 1, -1};
int dc[] = {1, -1, 0, 0};

void dfs(int r, int c) {
    if (destino_alcancado) {
        return;
    }

    visitado[r][c] = 1;

    if (mapa[r][c] == 'E') {
        destino_alcancado = 1;
        return;
    }

    int buraco_encontrado = 0;
    if (mapa[r][c] == 'o') {
        total_buracos++;
        buraco_encontrado = 1;
    }
    
    for (int i = 0; i < 4; i++) {
        int nr = r + dr[i];
        int nc = c + dc[i];

        if (nr >= 0 && nr < M && nc >= 0 && nc < N) {
            if (!visitado[nr][nc]) {
                char proxima_celula = mapa[nr][nc];
                
                if (proxima_celula == 'E' || proxima_celula == 'S' || 
                    proxima_celula == '_' || proxima_celula == 'o') {
                    
                    dfs(nr, nc);

                    if (destino_alcancado) {
                         return; 
                    }
                }
            }
        }
    }

    if (!destino_alcancado && buraco_encontrado) {
        total_buracos--;
    }
}


int main() {
    int P; 

    if (scanf("%d", &P) != 1) {
        return 0;
    }

    int start_r = -1, start_c = -1;
    char linha_buffer[1000 + 2];

    M = 0; 
    
    while (fgets(linha_buffer, sizeof(linha_buffer), stdin) != NULL) {
        if (linha_buffer[0] == '\n' || linha_buffer[0] == '\0') {
            continue;
        }

        if (M == 0) {
            N = 0;
            while (linha_buffer[N] != '\n' && linha_buffer[N] != '\0') {
                N++;
            }
        }
        
        for (int c = 0; c < N; c++) {
            mapa[M][c] = linha_buffer[c];
            if (mapa[M][c] == 'S') {
                start_r = M;
                start_c = c;
            }
        }
        M++;
        
        if (M >= 1000) break;
    }
    
    if (start_r != -1) {
        dfs(start_r, start_c);
    }
    
    if (destino_alcancado == 0) {
        printf("Todos morreram :)\n");
        return 0;
    }
    
    int sobreviventes = P - total_buracos;
    
    if (sobreviventes <= 0) {
        printf("Todos morreram :)\n");
    } else if (sobreviventes == P) {
        printf("Nenhum morreu :(\n");
    } else {
        printf("%d encontraram o vovo\n", sobreviventes);
    }

    return 0;
}