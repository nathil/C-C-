//Ler um valor inteiro e apresentá-lo acrescido de 25%.

#include <stdio.h>

int main(){
    int valor; 
    float aumento; 

    printf("Informe um valor:");
    scanf("%d", &valor); 

    aumento = valor + (0.25*valor); 

    printf("O valor final é:%.2f", aumento); 
}