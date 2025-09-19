#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*
    COmparação de string usando a função strcmp(string1,string2)
    0 -> as strings forem iguais
    1 -> a String1 maior que a string2
   -1 -> s string1 é menor que a string2
    */
int main(){
    char palavra1[20] = "abacate";
    char palavra2[10] = "aba";

    printf("Resultado: %d\n\n", strcmp(palavra1,palavra2));
}