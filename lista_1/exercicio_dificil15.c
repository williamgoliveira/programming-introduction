#include <stdio.h>

int main(){
    float dist = 0, vel = 3.6, x = 0;
    scanf("%f", &x);

    dist = (24 * x) * vel;
    printf("%f", dist);
    
    return 0;
}