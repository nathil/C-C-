//Ler um valor inteiro e apresentar seu antecessor e o seu sucessor..

#include <stdio.h> 

int main(){
    int valor, antecessor, sucessor;  

    printf("insira o valor:"); 
    scanf("%d", &valor);

    antecessor = valor - 1; 
    sucessor = valor + 1; 

    printf("O antecessor é:%d\nO sucessor é:%d\n", antecessor, sucessor); 
}