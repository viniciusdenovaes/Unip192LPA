#include <stdio.h>

int main(){
    int resultado, numero;
    resultado = 1;
    printf("Entre com o numero para calcular o fatorial\n");
    scanf("%d", &numero);
    for(int i=1; i<=numero; i++){
        resultado = resultado * i;
    }
    printf("O valor do fatorial de %d eh %d\n", numero, resultado);
}