#include <stdio.h>
#include <math.h>

int main(){
    int x1 = 0, x2 = 0, x3 = 0, y = 0;
    
    printf("Insira o valor de x1: ");
    scanf("%d", &x1);
    
    printf("Insira o valor de x2: ");
    scanf("%d", &x2);
    
    printf("Insira o valor de x3: ");
    scanf("%d", &x3);
    
    y = pow(x1 + 3, 4) + pow(x2 * x3, 3);
   
    printf("O valor de y é igual a: %d", y);
    
    return 0;
}