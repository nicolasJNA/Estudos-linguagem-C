#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*
    Copiando uama String com a função strcpy(destino,str para copiar)
*/
int main(){
    char palavra1[20] = "Oi.";
    char palavra2[10] = "Bom dia";

    strcpy(palavra2, palavra1);

    printf("Palavra1: %s\nPalavra2: %s\n",palavra1,palavra2);
    printf("\nResultado: %d\n", strcmp(palavra1,palavra2));
    return 0;
}  