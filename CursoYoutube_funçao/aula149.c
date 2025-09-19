#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int tam = 5;
void imprimirMatriz(int m[][5]){
    int i, j;
    for(i =0; i < tam;i++){
        for(j = 0; j< tam; j++){
            printf("%2d ", m[i][j]);
        }
    printf("\n");
    }
}
int main(){
    int mat[5][5];
    int i, j;
    srand(time(NULL));

    for(i =0; i < tam;i++){
        for(j = 0; j< tam; j++){
            mat[i][j] = rand() % 100;
        }
    }
    imprimirMatriz(mat);
    return 0;
}