#include<stdio.h>


int main(){
    int num = 10;
    int *p;
    p = &num;

    printf("Valor: %d",num);
    num = 50;
    printf("\tNovo valor: %d\n",num);
    printf("Endeço: %p",&num);
    printf("\tValor de p: %p\n", p);
    printf("Aponta: %d\n",*p);
    *p = 10;
    printf("Valor de num: %d\n", num);
    return 0;
}