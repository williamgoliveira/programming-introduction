#include <stdio.h>

int main(){
    int ano;
    scanf("%d", &ano);
    
    ano = ano / 4;
    if(ano % 2 == 0){
        printf("Bissexto");
    }
    else
        printf("Nao bissexto");
    
    return 0;
}