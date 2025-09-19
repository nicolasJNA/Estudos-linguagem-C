#include<stdio.h>


int main(){
    int num = 10;
    int *p;
    
    p= &num;

    printf("conteudo de num: %d", num);
    printf("\tEndereço de num: %p", &num);
    printf("\nConteudo de p: %p", p);
    printf("\tConteudo apontado por p: %d", *p);
    return 0;
}