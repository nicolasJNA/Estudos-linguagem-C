#include<stdio.h>
/* Aula 128: O que é String?
   Aula 129: Lendo Strings
*/
int main(){
    char palavra[100] = {"Vamos aprender a programar com a linguagem c"};

    printf("Digite seu nome: ");
    /*não utiliza o '&' para strings
      Scanf lê até o primeiro espaço digitado
      scanf("%80[^\n]",str);
      */
    scanf("%10[^\n]", palavra);

    printf("%s ", palavra);

    return 0;
}