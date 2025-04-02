#include <stdio.h>

int main() {
    float salario_m, salario_j, economia_m, economia_j, poupanca;
    
    printf("Insira o salário de Maria: R$ ");
    scanf("%f", &salario_m);
    printf("Insira o salário de José: R$ ");
    scanf("%f", &salario_j);
    
    economia_m = salario_m * 0.08;
    economia_j = salario_j * 0.08;
    poupanca = 0;
    
    poupanca += economia_m + economia_j;
    poupanca *= 1.005;
    printf("\nMês de Jul/23");
    printf("\nEconomia mensal: R$ %.2f", economia_m + economia_j);
    printf("\nSaldo atual: R$ %.2f \n", poupanca);
    
    poupanca += economia_m + economia_j;
    poupanca *= 1.005;
    printf("\nMês de Set/23");
    printf("\nEconomia mensal: R$ %.2f", economia_m + economia_j);
    printf("\nSaldo atual: R$ %.2f \n", poupanca);
    
    poupanca += economia_m + economia_j;
    poupanca *= 1.005;
    printf("\nMês de Out/23");
    printf("\nEconomia mensal: R$ %.2f", economia_m + economia_j);
    printf("\nSaldo atual: R$ %.2f \n", poupanca);
    
    poupanca += economia_m + economia_j;
    poupanca *= 1.005;
    printf("\nMês de Nov/23");
    printf("\nEconomia mensal: R$ %.2f", economia_m + economia_j);
    printf("\nSaldo atual: R$ %.2f \n", poupanca);
    
    poupanca += economia_m + economia_j;
    poupanca *= 1.005;
    printf("\nMês de Dez/23");
    printf("\nEconomia mensal: R$ %.2f", economia_m + economia_j);
    printf("\nSaldo atual: R$ %.2f \n", poupanca);
    
    poupanca += economia_m + economia_j;
    poupanca *= 1.005;
    printf("\nMês de Jan/24");
    printf("\nEconomia mensal: R$ %.2f", economia_m + economia_j);
    printf("\nSaldo atual: R$ %.2f \n", poupanca);
    
    poupanca += economia_m + economia_j;
    poupanca *= 1.005;
    printf("\nMês de Fev/24");
    printf("\nEconomia mensal: R$ %.2f", economia_m + economia_j);
    printf("\nSaldo atual: R$ %.2f \n", poupanca);
    
    poupanca += economia_m + economia_j;
    poupanca *= 1.005;
    printf("\nMês de Mar/24");
    printf("\nEconomia mensal: R$ %.2f", economia_m + economia_j);
    printf("\nSaldo atual: R$ %.2f \n", poupanca);
    
    poupanca += economia_m + economia_j;
    poupanca *= 1.005;
    printf("\nMês de Abril/24");
    printf("\nEconomia mensal: R$ %.2f", economia_m + economia_j);
    printf("\nSaldo atual: R$ %.2f \n", poupanca);
    
    printf("\n\nTotal para as férias: R$ %.2f", poupanca);
    
    return 0;
}