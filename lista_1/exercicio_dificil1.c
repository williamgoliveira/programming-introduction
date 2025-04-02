#include <stdio.h>
#include <math.h>

int main(){
    double dolar = 3500, real = 0, taxa = 5.05;
    
    real = dolar * taxa;
    
    printf("O valor investido em dólar é de: %2.lf\n", dolar);
    printf("O valor investido em reais é de: %2.lf", real);
    
    return 0;
}