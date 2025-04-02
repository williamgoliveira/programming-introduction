#include <stdio.h>

int main() {
    double custo_c = 0, custo_a = 0, custo_t = 0;
    int qtd_frangos;
    
    
    printf("Digite a quantidade de frangos: ");
    scanf("%d", &qtd_frangos);
    
    custo_c = qtd_frangos * 5.00;
    custo_a = (qtd_frangos / 2) * 2.50;
    custo_t = custo_c + custo_a;
    
    printf("\nCusto dos chips: R$%.2lf", custo_c);
    printf("\nCusto dos aneis de alimentos: R$%.2lf", custo_a);
    printf("\nCusto total da granja: R$%.2lf", custo_t);
    return 0;
}