#include <stdio.h>

int main(){
    double comp = 0, largura = 0, altura = 0, vol = 0;
    
    /*printf("Digite o tamanho do comprimento da caixa d'água em metros: ");
    scanf("%lf", &comp);
    
    printf("\nDigite o tamanho da altura da caixa d'água em metros: ");
    scanf("%lf", &altura);
    
    printf("\nDigite o tamanho do largura da caixa d'água em metros: ");
    scanf("%lf", &largura);*/
    scanf("%lf %lf %lf", &comp, &altura, &largura);
    
    vol = 0.9 * ( comp * altura * largura );
    
    printf("%.6lf", vol);
    return 0;
}