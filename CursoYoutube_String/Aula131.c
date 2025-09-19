#include<stdio.h>
#include<stdlib.h>
/*  Aula 130: tamanho de uma string*/
int main(){
    int i, tam;
    char palavra[47] = {"Dando mais um passo no aprendizado, usando fgets"};
    
    printf("Digite seu nome: ");
    //scanf("%10[^\n]", str);
    // gets(str);
    fgets(palavra,10,stdin);
    tam = 0;
    i = 0;
    while(palavra[i] != '\0'){
        i++;
        if(palavra[i]=='\0'){
            break;
        }
        tam++;
    }
    printf("A string tem tamanho: %d", tam);
    return 0;
}