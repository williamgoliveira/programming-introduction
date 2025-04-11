#include <stdio.h>

int main() {
    int dias_f, dias_p, dias_r;
    
    //printf("Insira o número de dias que você já faltou: ");
    scanf("%d", &dias_f);
    
    dias_p = (128 * 0.25) / 2;
    dias_r = dias_p - (dias_f);
    
    printf("%d", dias_r);
    
    return 0;
}