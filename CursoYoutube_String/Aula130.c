#include<stdio.h>
#include<stdlib.h>
/*  Aula 130: Usando a função fgets(var a ser armazenada, tamanho, entrada) para leitura de Stirng*/
int main(){
    char palavra[47] = {"Dando mais um passo no aprendizado, usando fgets"};
    printf("Digite seu nome: ");
    //scanf("%10[^\n]", str);
    // gets(str);
    fgets(palavra,10,stdin);
    int i = 0;
    while(palavra[i] != '\0'){
        printf("\n%d-%c",i,palavra[i]);
        i++;
    }
    printf("\n");
    return 0;
}