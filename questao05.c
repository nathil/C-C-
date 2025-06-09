//Ler um número inteiro e apresentar: NUMERO=xx, QUADRADO=xx e RAIZ QUADRADA=xx

#include <stdio.h>
#include <math.h>

int main(){
    int valor, quadrado, raiz; 

    printf("informe um valor:"); 
    scanf("%d", &valor);

    quadrado = pow(valor,2); 
    raiz = sqrt(valor);

    printf("número: %d\nquadrado: %d\nraiz: %d\n", valor, quadrado, raiz); 
}