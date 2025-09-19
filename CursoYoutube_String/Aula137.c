#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
    Como dividir uma String com a função strtok()
*/
int main(){
    char palavra[] = "Bom dia flor do dia";
    char *p;
    p = strtok(palavra," ");
    while(p != NULL){
        printf("token: %s\n", p);
        p = strtok(NULL," ");
    }
    return 0;
}