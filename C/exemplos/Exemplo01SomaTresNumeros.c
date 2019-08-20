#include<stdio.h> //standard input output

int main(){
  
  int numero1, numero2, numero3;
  
  printf("Entre com tres numeros\n");
  scanf("%d", &numero1);
  scanf("%d", &numero2);
  scanf("%d", &numero3);
  
  int resultado;
  resultado = numero1 + numero2 + numero3;
  
  printf("A soma de %d, com %d, e o %d, eh %d\n", 
         numero1, numero2, numero3, resultado);
  
  
}

