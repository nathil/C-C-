//Ler um número inteiro é dizer se o mesmo é par ou impar. 

#include <stdio.h> 

int main(){
    int numero; 

    printf("Informe um valor:"); 
    scanf("%d", &numero); 

    if(numero % 2 == 0){
        printf("e par."); 
    }
    else{
        printf("e impar."); 
    }
}