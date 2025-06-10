//Imprimir o maior entre dois números utilizando o operador condicional maximo=a>b?a:b; 

#include <stdio.h>

int main(){ 
    int num1, num2; 
    printf("informe um valor:");
    scanf("%d", &num1);
    printf("informe outro valor:\n");
    scanf("%d", &num2);
    
    printf("o maior e:%d", num1 > num2 ? num1:num2);
}