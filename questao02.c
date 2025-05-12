#include <stdio.h>

int main(){
    int soma, diferenca, produto, media, valor1, valor2; 
    
    printf("Insira um valor:"); 
    scanf("%d", &valor1);
    printf("Insira um outro valor:"); 
    scanf("%d", &valor2); 
    
    soma = valor1  + valor2; 
    diferenca = valor1 - valor2; 
    produto = valor1 * valor2; 
    media = soma/2;  
    
    printf("\nA soma é:%d", soma);
    printf("\nA diferenca é:%d", diferenca);
    printf("\nO produto é:%d", produto);
    printf("\nA média é:%d", media); 
}
