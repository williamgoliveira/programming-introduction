#include <stdio.h>

int main() {
    float salario = 0.0;
    scanf("%f", &salario);
    
    printf("%f\n%f\n%f\n", salario, salario, salario);

    salario *= 1.05;
    printf("%f\n%f\n%f\n%f\n%f\n", salario, salario, salario, salario, salario);
    
    salario *= 1.039;
    printf("%f\n%f\n%f\n%f", salario, salario, salario, salario);
    
    return 0;
}