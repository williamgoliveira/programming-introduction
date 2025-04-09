#include <stdio.h>

int main(){
    int faltas = 0, aulas = 64;
    float nota_1 = 0, nota_2 = 0, nota_3 = 0, media = 0;
    scanf("%f %f %f %d", &nota_1, &nota_2, &nota_3, &faltas);
    
    media = (nota_1 + nota_2 + nota_3) / 3;
    
    if(faltas > (aulas / 4)){
        printf("Reprovado por falta");
        return 0;
    }
    
    if(media >= 7){
        printf("Aprovado");
        return 0;
    }
    
    if(media >= 5 && media < 7){
        printf("Prova final");
        return 0;
    }
    
    if(media < 5){
        printf("Reprovado");
        return 0;
    }
    
    return 0;
}