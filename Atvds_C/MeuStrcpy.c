#include <stdio.h>
#include <stdlib.h>

int strcpy(char *destino,char *origem){
    int i = 0;
    while(*(origem + i) != '\0'){
        *(destino + i) = *(origem + i);
        i++;
    }
    *(destino + i) = '\0';
    return i;
}

int main() {
    char nome[20], palavra[20] = {"Bom dia"};
    printf("Tamanho: %d\n", strcpy(nome,palavra));
    printf("Destino: %s",nome);
    return 0;
}