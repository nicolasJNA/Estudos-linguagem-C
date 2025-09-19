#include <stdio.h>
// somatorio de 1 até 10
int valor = 0;
void somatorio(int num){
    if(num == 0){
        printf("%d",valor);
    }else{
        valor += num;
        somatorio(num-1);
    }
}

int main(){
    int contagem = 10;
    somatorio(contagem );
    return 0;
}