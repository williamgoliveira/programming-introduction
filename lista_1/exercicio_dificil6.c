#include <stdio.h>
#include <math.h>

int main(){
    double custo_quil = 0.671, qtd_quil = 0, custo;  
    
    printf("Insira a quantidade de quilowatts consumida: ");
    scanf("%lf", &qtd_quil);
    
    custo = qtd_quil * custo_quil;
    
    printf("\nO valor a ser pago é de: R$%.2lf.", custo);
    printf("\nO valor a ser pago com desconto de 20 por cento é de: R$%.2lf.", custo - custo * 0.2);
    return 0;
}