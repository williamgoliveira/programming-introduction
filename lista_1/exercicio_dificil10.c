#include <stdio.h>

int main() {
    float f, c;
    
    printf("Digite a temperatura em Fahrenheit para converter uma temperatura de Fahrenheit para Celsius: ");
    scanf("%f", &f);
    
    c = (f - 32) * 5.0 / 9.0;
    
    printf("\nA temperatura de %.1fF equivale a %.1fC\n", f, c);
    
    return 0;
}