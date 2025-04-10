#include <stdio.h>

int main(){
    int n1 = 0, n2 = 0, soma = 0, contador = 0, media = 0;
    scanf("%d %d", &n1, &n2);

    for(int i = n1; i <= n2; i++){
        if(i % 2 == 0){
            soma += i;
            contador++;
        }
    }
    
    media = contador > 0 ? soma / contador : 0;
    printf("%d\n%d", soma, media);

    return 0;
}