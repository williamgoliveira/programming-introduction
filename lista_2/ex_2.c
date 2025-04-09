#include <stdio.h>
#include <math.h>

int main(){
    int a = 0;
    scanf("%d", &a);
    
    if(a % 2 == 0){
        printf("%d Par", a);
        return 0;
    }
    
    else
        printf("%d Impar", a);
        
    return 0;
}