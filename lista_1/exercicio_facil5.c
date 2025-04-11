#include <stdio.h>
#include <math.h>

int main(){
    float h = 0, c1 = 0, c2 = 0;
    
    scanf("%f %f", &c1, &c2);   
    /*printf("Insira o tamanho do primeiro cateto: ");
    scanf("%d", &c1);
    
    printf("Insira o tamanho do segundo cateto: ");
    scanf("%d", &c2);*/
    
    h = pow(c1, 2) + pow(c2, 2);
    h = sqrt(h);
    
    printf("%.6f", h);
    
    return 0;
}