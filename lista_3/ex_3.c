#include <stdio.h>

int main() {
    int num = 0, expo = 0, numf = 1;
    
    scanf("%d %d", &num, &expo);
    
    if (expo == 0) {
        printf("1");
        return 0;
    }
    
    while (expo != 0) {
        numf *= num;
        --expo;
    }
    
    printf("%d", numf);
    
    return 0;
}