#include <stdio.h>

int main(){
    int x = 100000;
    x = x % 3;
    
    printf("O resto da divisão de 100000/3 é igual a: %d", x);
    
    return 0;
}