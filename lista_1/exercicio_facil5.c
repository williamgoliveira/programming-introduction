#include <stdio.h>
#include <math.h>

int main(){
    int h = 0, c1 = 0, c2 = 0;
    
    printf("Insira o tamanho do primeiro cateto: ");
    scanf("%d", &c1);
    
    printf("Insira o tamanho do segundo cateto: ");
    scanf("%d", &c2);
    
    h = sqrt(pow(c1, 2) + pow(c2, 2));
    
    printf("O tamanho da hipotenusa, quando c1 = %d e c2 = %d, é igual a = %d", c1, c2, h);
    
    return 0;
}