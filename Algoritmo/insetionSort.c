#include<stdio.h>
int main(){
    int vetor[12] = {32,43,1,2,7,86,54,33,66,67,98,1};
    for (int a = 1; a < 12; a++){
        int chave = vetor[a];
        int indice = a - 1;
        while (indice >= 0 && vetor[indice] > chave){
            vetor[indice+1] = vetor[indice];
            indice = indice - 1;
        }
        vetor[indice + 1] = chave;
    }
    for (int cont = 0; cont < 12; cont++){
        printf("%d ", vetor[cont]);
    }
    return 0;
}