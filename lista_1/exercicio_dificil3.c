#include <stdio.h>
#include <math.h>

int main(){
    double salario_min = 1412, salario_jose = 4500, qtd_salario = 0;
    
    qtd_salario = salario_jose / salario_min;
    printf("O salário mínimo atualmente é de: %.1lf \n", salario_min);
    printf("O salário de José atualmente é de: %.1lf \n", salario_jose);
    printf("Atualmente José recebe: %1.f salários mínimos.", qtd_salario);
    
    return 0;
}