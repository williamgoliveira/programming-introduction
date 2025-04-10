#include <stdio.h>

int main(){
    int n = 0, soma = 0, i;
    scanf("%d", &n);
    
    if(n == 1){
        printf("%d\n%d", n, n);
        return 0;
    }
    
    for(i = 1; i <= n; i++){
        if(i >= 2){
            printf(" ");
        }
        printf("%d", i);
        soma += i;
    }
    
    if(i > 2){
        printf("\n%d", soma);
        return 0;
    }
    
    return 0;
}