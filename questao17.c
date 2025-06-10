//ler três números inteiros do teclado, e imprime os três números em ordem crescente.

#include <stdio.h>

int main(){
    int num1, num2, num3, maior, menor, medio; 

    printf("Informe o 1o valor:"); 
    scanf("%d", &num1);
    printf("Informe o 2o valor:"); 
    scanf("%d", &num2);
    printf("Informe o 3o valor:"); 
    scanf("%d", &num3);

    maior = num1; 
    menor = num2; 

    if(num2 > maior){
        maior = num2; 
    }
    if(num3 > maior){
        maior = num3; 
    }
    if(num1 < menor){
        menor = num1; 
    }
    if(num3 < menor){
        menor = num3;
    }
    if(num1 != maior && num1 != menor){
        medio = num1; 
    }
    if(num2 != maior && num2 != menor){
        medio = num2; 
    }
    if(num3 != maior && num3 != menor){
        medio = num2; 
    }

    printf("%d %d %d", menor, medio, maior); 
}