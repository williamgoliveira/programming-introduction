#include <stdio.h>

int main(){
    int conta = 0;
    float limite = 0, saldo_i = 0, total_d = 0, saques = 0, saldo_f = 0;
    
    scanf("%d %f %f %f %f", &conta, &limite, &saldo_i, &total_d, &saques);
    
    saldo_f = saldo_i + total_d - saques;
    
    if(saldo_f > limite){
        printf("Credito excedido: %.5f", saldo_f);
    }
    
    else {
        printf("Saldo: %.5f", saldo_f);
    }
    
}