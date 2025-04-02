#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int x = 0, y = 0, z = 0;
    
    
    printf("Imprima dois números em ordem crescente para receber um número aleatório em seu intervalo.\nInsira o primeiro valor: ");
    scanf("%d", &x);
    
    printf("Insira o segundo valor: ");
    scanf("%d", &y);
    
    srand(time(NULL));
    z = x + rand() % (y - x + 1);
    
    printf("O número aleatório escolhido foi: %d", z);
    
    return 0;
}