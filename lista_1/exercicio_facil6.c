#include <stdio.h>
#include <math.h>

int main(){
    float pi = 3.1415, hip = 0, co = 0, ca = 0, a_graus = 0, a_rad = 0;
    
    printf ("Insira o tamanho da hipotenusa: \n");
    scanf ("%f", &hip);
    
    printf("Insira o valor do angulo em graus: \n");
    scanf ("%f", &a_graus);
    
    a_rad = (a_graus * pi) / 180;
    
    co = hip * sin(a_rad);
    printf("O cateto oposto mede: %2.0f\n", co);
    
    ca = hip * cos(a_rad);
    printf("O cateto adjacente mede: %2.0f\n", ca);
    

    return 0;
}