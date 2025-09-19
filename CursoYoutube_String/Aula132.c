#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*  Aula 130: Usando a função strlen() para saber o tamanho da string*/
int main(){
    char palavra[47] = {"Dando mais um passo no aprendizado, usando fgets"};
    //printf("Digite seu nome: ");
    //scanf("%10[^\n]", str);
    // gets(str);
    
    fgets(palavra,15,stdin);

    printf("Length: %d",strlen(palavra));
    return 0;
}