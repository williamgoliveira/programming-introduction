#include <stdio.h>

int main() {
    float salario = 0;
    
    printf("Insira seu salário: ");
    scanf("%f", &salario);
    
    printf("\nGasto com saúde 5% R$%.2f", salario*0.05);
    printf("\nGasto com educação 12% R$%.2f", salario*0.12);
    printf("\nGasto com alimentação 30% R$%.2f", salario*0.3);
    printf("\nGasto com vestuário 10% R$%.2f", salario*0.1);
    printf("\nGasto com lazer 5% R$%.2f", salario*0.05);
    printf("\nGasto com moradia 25% R$%.2f", salario*0.25);
    printf("\nOutros gastos 13% R$%.2f", salario*0.13);
    
    return 0;
}