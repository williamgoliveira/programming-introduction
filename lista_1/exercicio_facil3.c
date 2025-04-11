#include <stdio.h>
#include <math.h>

int main(){
    float a = 0, b = 0, c = 0, d = 0, e = 0, x = 0;
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    
    /* printf("Insira o valor de a: ");
    scanf("%f", &a);
    
    printf("Insira o valor de b: ");
    scanf("%f", &b);
    
    printf("Insira o valor de c: ");
    scanf("%f", &c);
    
    printf("Insira o valor de d: ");
    scanf("%f", &d);
    
    printf("Insira o valor de e: ");
    scanf("%f", &e); */
    
    x = pow(a, 3) * (((b + c) / d) + e);
    
    //printf("a = %0.f, b = %0.f, c = %0.f, d = %0.f, e = %0.f \n", a, b, c, d, e);
    printf("%.6f", x);
    
    return 0;
}