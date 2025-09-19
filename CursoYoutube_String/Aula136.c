#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*
    Procurando caracteres em uma string usasndo funções strchr e strrchr
    strchr -> retorna a primeira ocorrencia
    strrchr -> retorna a ultima ocorrencia
*/
int main(){
    char palavra[20] = "papaleguas";
    char *letra;
    // recebe o ponteiro da character 'a'
    letra = strchr(palavra,'a');

    printf("%c\n", *letra);
    
    //conteudo logo apos o 'a'
    printf("%c\n", *(letra+1));

    letra = strrchr(palavra,'a');

    printf("%c\n", *letra);
    printf("%c\n", *(letra+1));
    return 0;
}