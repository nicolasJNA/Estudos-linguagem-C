#include <stdio.h>
#include <stdlib.h>
/*
    Foram digitadas 3 linhas, cada linha contem o nome e a nota de um alunoo.
    Escreva um programa que leia essas informações e monte uma tabela onde a 
    primeira coluna é o nome e a segunda coluna é a nota
*/
int main() {
    char nome[3][30];
    float notas[3];

    for (int i = 0; i < 3; i++){
        printf("Digite o nome e a nota do estudante: ");
        scanf("%s%f", &nome[i], &notas[i]);
    }
     for (int i = 0; i < 3; i++){
        printf("%s\t%2.f\n",nome[i], notas[i]);    
    }
    return 0;
}