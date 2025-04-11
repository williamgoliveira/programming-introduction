#include <stdio.h>

int main(){
    double dolar = 0, real = 0, taxa = 5.05;
    scanf("%lf", &dolar);
    
    real = dolar * taxa;
    
    printf("%.6lf", real);
    
    return 0;
}