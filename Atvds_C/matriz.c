#include<stdio.h>

int main() {
    int l1, c1, l2, c2, valor;
    int transposta = 1; // 1 para verdadeiro, 0 para falso
    
    printf("Informe as dimensões da 1º Matriz (linha e coluna): ");
    scanf("%d%d", &l1, &c1);
    int matriz_1[l1][c1];
    
    for (int cont = 0; cont < l1; cont++) {
        for (int num = 0; num < c1; num++) {
            printf("Valor da matriz_1(%dx%d): ", cont, num);
            scanf("%d", &valor);
            matriz_1[cont][num] = valor;
        }
    } 
    
    printf("Informe as dimensões da 2º Matriz (linha e coluna): ");
    scanf("%d%d", &l2, &c2);
    int matriz_2[l2][c2];
    
    for (int cont = 0; cont < l2; cont++) {
        for (int num = 0; num < c2; num++) {
            printf("Valor da matriz_2(%dx%d): ", cont, num);
            scanf("%d", &valor);
            matriz_2[cont][num] = valor;
        }
    }
    
    if (c1 == l2 && l1 == c2) {
        for (int cont = 0; cont < l2 && transposta; cont++) {
            for (int num = 0; num < c2 && transposta; num++) {
                if (matriz_1[num][cont] != matriz_2[cont][num]) {
                    transposta = 0; // Não é transposta
                }
            }
        }
        
        if (transposta) {
            printf("A matriz B é transposta de A\n");
        } else {
            printf("A matriz B não é transposta de A\n");
        }
    } else {
        printf("As dimensões não são compatíveis para transposição\n");
    }
    
    return 0;
}