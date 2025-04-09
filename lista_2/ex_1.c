#include <stdio.h>
#include <math.h>

int main(){
    float a = 0, b = 0, c = 0, d, x1 = 0, x2 = 0;
    scanf("%f %f %f", &a, &b, &c);
    
    if(a == 0){
        printf("Nao e equacao do segundo grau");
        return 0;
    }
    
    d = pow(b, 2) - 4 * a * c;
    
    if(d < 0){
        printf("Nao ha raizes reais");
    }
    
    if(d >= 0){
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("%.5f %.5f", x1, x2);
    }
    
    return 0;
}