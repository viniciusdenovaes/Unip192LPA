#include<stdio.h>   // standard input output

int main(){
    
    // Declaracao
    float nota1, nota2, nota3, media;
    
    // Entrada dos dados
    printf("Escreva as notas\n");
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);
    
    // comandos
    media = (nota1 + nota2 + nota3) / 3.0;
    
    // Saida
    printf("A media entre %.2f, %.2f, %.2f eh %.2f\n", 
        nota1, nota2, nota3, media);
  
}