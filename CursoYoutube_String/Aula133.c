#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*
    Comcatenação de string usando a função strcat()
*/
int main(){
    char palavra[20] = ("Oi.");

    strcat(palavra, " Bom dia");

    printf("\n\t%s",palavra);
}