#include <stdio.h>

int main() {
    float p1, p2, p3, t1, t2, media_t, media_p, media_f;
    
    printf("Insira a nota da primeira prova: ");
    scanf("%f", &p1);
    printf("Insira a nota da segunda prova: ");
    scanf("%f", &p2);
    printf("Insira a nota da terceira prova: ");
    scanf("%f", &p3);
    printf("Insira a nota do primeiro trabalho: ");
    scanf("%f", &t1);
    printf("Insira a nota do segundo trabalho: ");
    scanf("%f", &t2);
    
    media_p = (p1 + p2 + p3) / 3;
    media_t = (t1 + t2) / 2;
    media_f = (media_t * 0.6) + (media_p * 0.4);
    
    printf("\nMédia das provas teóricas: %.2f", media_p);
    printf("\nMédia dos trabalhos: %.2f", media_t);
    printf("\nMédia final da disciplina: %.2f", media_f);
    
    return 0;
}