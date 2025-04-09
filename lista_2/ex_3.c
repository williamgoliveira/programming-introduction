#include <stdio.h>

int main(){
    int idade = 0;
    scanf("%d", &idade);
    
    if(idade >= 5 && idade < 8){
        printf("Infantil A");
        return 0;
    }
    
    if(idade >= 8 && idade < 11){
        printf("Infantil B");
        return 0;
    }
    
    if(idade >= 11 && idade < 14){
        printf("Juvenil A");
        return 0;
    }
    
    if(idade >= 15 && idade < 18){
        printf("Juvenil B");
        return 0;
    }
    
    if(idade > 18){
        printf("Adulto");
        return 0;
    }
}