#include <stdio.h>

int main(){
    int x = 0, y = 0, z = 0, r = 0;
    
    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("\nDigite o valor de Y: ");
    scanf("%d", &y);
    printf("\nDigite o valor de X: ");
    scanf("%d", &z);
    
    r = pow(x, 3) + pow(y, 2) + (x * y * z);
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    printf("r = %d", r);
    
    return 0;
}