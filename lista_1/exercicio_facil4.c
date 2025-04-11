#include <stdio.h>
#include <math.h>

int main(){
    int x1 = 0, x2 = 0, x3 = 0, y = 0;
    
    scanf("%f %f %f", &x1, &x2, &x3);
    /*printf("Insira o valor de x1: ");
    scanf("%d", &x1);
    
    printf("Insira o valor de x2: ");
    scanf("%d", &x2);
    
    printf("Insira o valor de x3: ");
    scanf("%d", &x3);*/
    
    y = pow(x1 + 3, 4) + pow(x2 * x3, 3);
   
    printf("%d", y);
    
    return 0;
}