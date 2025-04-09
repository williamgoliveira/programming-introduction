#include <stdio.h>

int main(){
    float salario = 500, bonus = 800, vendas = 0;
    
    scanf("%f", &vendas);
    
    salario = salario + (0.09 * vendas);
    
    if(vendas > 15000){
        salario += bonus;
    }
    
    printf("%.5f", salario);
    
    return 0;
}