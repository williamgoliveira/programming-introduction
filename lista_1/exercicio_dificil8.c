#include <stdio.h>

int main() {
    int m1, m50, m25, m10, m5, m01, mtotal;
    float total;
    
    printf("Insira a quantidade de moedas de R$1,00: ");
    scanf("%d", &m1);
    printf("Insira a quantidade de moedas de R$0,50: ");
    scanf("%d", &m50);
    printf("Insira a quantidade de moedas de R$0,25: ");
    scanf("%d", &m25);
    printf("Insira a quantidade de moedas de R$0,10: ");
    scanf("%d", &m10);
    printf("Insira a quantidade de moedas de R$0,05: ");
    scanf("%d", &m5);
    printf("Insira a quantidade de moedas de R$0,01: ");
    scanf("%d", &m01);
    
    mtotal = m1 + m50 + m25 + m10 + m5 + m01;
    
    total = (m1 * 1.00) + (m50 * 0.50) + (m25 * 0.25) + (m10 * 0.10) + (m5 * 0.05) + (m01 * 0.01);
    
    printf("\nValor total economizado: R$ %.2f", total);
    printf("\nNúmero total de moedas %d", mtotal);
    
    return 0;
}