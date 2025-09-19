#include<stdio.h>
#include<stdlib.h>
/*
    Aula 153: Funções e procedimentos recursivos
    Exemplo: Imprimir todos os numero de n até 10
*/
void imprimir(int a){
    if (a == 0){
        printf("%d ", a);
    }else{
        printf("%d ", a);
        imprimir(a-1);
    }

}

int main(){
    int a = 10;
    imprimir(a);
    return 0;
}