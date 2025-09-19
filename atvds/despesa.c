#include <stdio.h>

int main (){
    int valor, quant;
    float tip;
    printf("Qual o valor da conta? ");
    scanf("%d",&valor);
    printf("\nQuantas pessoas há na mesa? ");
    scanf("%d",&quant);
    tip = valor*(0.1);
    printf("A valor da conta para cada pessoa é %.2f somando-se com o valor da gorjeta %.2f", (float)(valor + tip)/quant, tip);
   
    return 0;
}