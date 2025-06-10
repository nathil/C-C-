//Ler três números inteiros A, B e C, e encontrar o maior, menor e o médio elemento entre eles. Levando-se em consideração que
//estes números são diferentes. 

#include <stdio.h> 

int main(){
    int num1, num2, num3, maior, menor, medio; 

    printf("Informe o 1º valor:"); 
    scanf("%d", &num1);
    printf("Informe o 2º valor:"); 
    scanf("%d", &num2); 
    printf("Informe o 3º valor:"); 
    scanf("%d", &num3); 
    maior = num1; 
    menor = num2; 
    medio = num3;

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
        menor = num1; 
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
    printf("maior:%d\nmenor:%d\nmedio:%d\n", maior, menor, medio); 
}