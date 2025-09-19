#include <stdio.h>

int particao(int *v, int inicio, int fim){
    int meio;
    meio = (inicio + fim)/2;
    if(inicio < fim){
        particao(*v,inicio,meio);
        particao(*v,meio+1,fim);
    }
    return inicio;
}


int main(){

    return 0;
}