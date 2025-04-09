#include <stdio.h>

int main(){
    float altura = 0, peso = 0, imc = 0;
    scanf("%f %f", &peso, &altura);
    
    altura = altura * altura;
    imc = peso / altura;
    
    if(imc < 18.5){
        printf("Abaixo do peso");
        return 0;
    }
    
    if(imc >= 18.5 && imc < 25){
        printf("Peso normal");
        return 0;
    }
    
    if(imc >= 25 && imc < 30){
        printf("Sobrepeso");
        return 0;
    }
    
    if(imc >= 30){
        printf("Obesidade");
        return 0;
    }
    
    return 0;
}