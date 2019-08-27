#include <stdio.h>

int main(){
    
    float a, b;
    
    printf("Entre com dois numeros\n");
    scanf("%f", &a);
    scanf("%f", &b);
    
    if(a<b){
        printf("o menor eh %f\n", a);
    }
    if(b<a){
        printf("o menor eh %f\n", b);
    }
    if(a==b){
        printf("Os dois sao iguais\n");
    }
    
}