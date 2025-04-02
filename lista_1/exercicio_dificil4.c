#include <stdio.h>
#include <math.h>

int main(){
    double salario;
    
    printf("Insira seu salário em janeiro: ");
    scanf("%lf", &salario);
    
    printf("Seu salário em jan/24 foi de: %1.lf \n", salario);
    printf("Seu salário em fev/24 deve ser: %1.lf \n", salario);
    printf("Seu salário em mar/24 deve ser: %1.lf \n", salario);
    printf("Seu salário em abril/24 deve ser: %1.lf \n", salario = salario + (salario * 0.05));
    printf("Seu salário em maio/24 deve ser: %1.lf \n", salario);
    printf("Seu salário em jun/24 deve ser: %1.lf \n", salario);
    printf("Seu salário em jul/24 deve ser: %1.lf \n", salario);
    printf("Seu salário em set/24 deve ser: %1.lf \n", salario = salario + (salario * 0.039));
    printf("Seu salário em out/24 deve ser: %1.lf \n", salario);
    printf("Seu salário em nov/24 deve ser: %1.lf \n", salario);
    printf("Seu salário em dez/24 deve ser: %1.lf \n", salario);
    printf("Caso receba decimo terceiro salário ele deve ser de: %1.lf", salario);
    
    return 0;
}