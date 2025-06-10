// Idem, três números reais.


#include <stdio.h>

int main(){
    float num1, num2, num3, maior, menor, medio; 

    printf("Informe o 1o valor:"); 
    scanf("%f", &num1);
    printf("Informe o 2o valor:"); 
    scanf("%f", &num2);
    printf("Informe o 3o valor:"); 
    scanf("%f", &num3);

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

    printf("%.0f %.0f %.0f", menor, medio, maior); 
}