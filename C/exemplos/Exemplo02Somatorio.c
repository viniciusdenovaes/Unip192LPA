#include <stdio.h>

int main(){
    int bolsa, numero;
    bolsa = 0;
    printf("Entre com o numero\n");
    scanf("%d", &numero);
    for(int i=0; i<=numero; i++){
        bolsa = bolsa + i;
    }
    printf("O valor total foi de %d\n", bolsa);
}