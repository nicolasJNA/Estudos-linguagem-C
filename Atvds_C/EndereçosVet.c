#include<stdio.h>
#include <stdlib.h> 


int main(){
    int numeros[10] = {10,21,213,87,65,3,4,6,8,12}; 
    for (int a = 0; a<10;a++){
        printf("Endereço: %p\tConteudo: %d\n",(numeros + a),*(numeros + a));
    }
    //o endereço da memoria de cada elemento, é reservado de 4 em 4 bytes
    return 0;
}