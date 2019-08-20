#include <stdio.h>

int main(){
    
    float salario_inicial, aumento, salario_final;
    
    scanf("%f", &salario_inicial);
    
    aumento = (25.0/100.0) * salario_inicial;
    
    printf("O aumento foi de %f\n", aumento);
    
    salario_final = salario_inicial + aumento;
    
    printf(
        "O salario antigo era de %f, o salario novo sera de %f\n", 
        salario_inicial, salario_final);
}