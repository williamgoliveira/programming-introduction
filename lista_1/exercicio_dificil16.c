#include <stdio.h>

int main() {
    int numero, un, dez, cen, mil;
    
    printf("Insira um número de 4 dígitos: ");
    scanf("%d", &numero);
    
    un = numero % 10;
    dez = (numero / 10) % 10;
    cen = (numero / 100) % 10;
    mil = numero / 1000;
    printf("Seu número possui %d milhares ou milhar, %d centenas ou centena, %d dezenas ou dezena e %d unidades ou unidade.", mil, cen, dez, un);
    printf("\nSeu número invertido: %d%d%d%d", un, dez, cen, mil);
    
    return 0;
}