#include <stdio.h>
#include <stdlib.h>

//ponteiro para uma struct
typedef struct{
    int mes,dia,ano;
}Data;

void imprimirData(Data *x){
    printf("\n%d/%d/%d\n", x->dia,x->mes,x->ano);
    x->ano = 2001;
    x->dia = 11;
    x->mes = 9;
    printf("\n%d/%d/%d\n", x->dia,x->mes,x->ano);

}
int main() {
    Data data;
    Data *p;

    p = &data;

    data.ano = 2024;
    data.mes = 9;
    data.dia = 20;

    printf("Data  %d/%d/%d", data.dia,data.mes,data.ano);
    printf("\nConteudo de P: %p", p);
    imprimirData(&data);
    return 0;
}