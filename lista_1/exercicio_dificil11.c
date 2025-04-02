#include <stdio.h>

int main() {
    float total = 0, tarifa_a = 0, tarifa_e = 0, soma = 0;
    
    printf("Insira o valor da tarifa de água: ");
    scanf("%f", &tarifa_a);
    printf("Insira o valor da tarifa de esgoto: ");
    scanf("%f", &tarifa_e);
    
    soma = tarifa_a + tarifa_e;
    
    total = soma + (soma * 0.175);
    printf("O valor a ser pago na conta de água é de: R$%.2f", total);
    
    return 0;
}