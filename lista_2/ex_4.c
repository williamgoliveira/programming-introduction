#include <stdio.h>

int main(){
    int x = 0, y = 0, z = 0;
    scanf("%d %d %d", &x, &y, &z);
    
    if ((x + y > z) && (x + z > y) && (y + z > x)){
        if(x == y && y == z){
            printf("Equilatero");
            return 0;
        }
    
        if(x == y || y == z){
            printf("Isosceles");
            return 0;
        }
    
        if(x < y && y < z){
            printf("Escaleno");
            return 0;
        }
    }
    
    else
        printf("Nao forma triangulo");
    
    return 0;
}