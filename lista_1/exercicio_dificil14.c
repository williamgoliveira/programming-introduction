#include <stdio.h>

int main() {
    int dias_f, dias_p, dias_r;
    
    printf("Insira o número de dias que você já faltou: ");
    scanf("%d", &dias_f);
    
    dias_p = (128 * 75) / 100 / 2;
    dias_r = dias_p - dias_f;
    
    printf("\nVocê pode faltar em uma matéria de 128h no máximo %d dias para não ser reprovado por faltas.", dias_p);
    printf("\nVocê ainda pode faltar %d dias.", dias_r);
    
    return 0;
}