#include <stdio.h>
#include <math.h>

int main(){
    double x1, y1, x2, y2;

    printf("Digite o valor de x1: ");
    scanf("%lf", &x1);
    
    printf("Digite o valor de y1: ");
    scanf("%lf", &y1);
    
    printf("Digite o valor de x2: ");
    scanf("%lf", &x2);
    
    printf("Digite o valor de y2: ");
    scanf("%lf", &y2);

    printf("A distância entre (%1.f, %1.f) e (%1.f, %1.f) é: %.2f\n", x1, y1, x2, y2, sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)));

    return 0;
}