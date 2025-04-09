#include <stdio.h>

int main(){
    int a = 0, b = 0, c = 0, backup = 0;
    scanf("%d %d %d", &a, &b, &c);
    
    if(a > b){
        backup = a; a = b; b = backup;
    }
    
    if(b > c){
        backup = b; b = c, c = backup;
    }
    
    if(a > b){
        backup = a; a = b; b = backup;
    }
    
    printf("%d %d %d", a, b, c);
    return 0;
}