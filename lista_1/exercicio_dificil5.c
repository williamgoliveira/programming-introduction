#include <stdio.h>
#include <math.h>

int main(){
    double x = 0, f = 0;
    
    printf("Insira o valor de x: \n");
    scanf("%lf", &x);
    
    f = (3 * pow(x, 2)) + (5 * x) - 9;
    
    printf("\nO valor de f(x) = %1.lf quando x = %.1lf.", f, x);
    return 0;
}