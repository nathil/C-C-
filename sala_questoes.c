//questões em sala

#include <stdio.h>
// questão 01

float maior(float valor1, float valor2){
    float maior = valor1; 
    if (valor2 > maior){
        return valor2; 
    }
    return maior;
}

int main() {
    float valor1, valor2; 
    
    printf("Informe um valor:"); 
    scanf("%f", &valor1);
    printf("\nInforme outro valor:"); 
    scanf("%f", &valor2); 
    
    printf("O maior valor é:%.1f", maior(valor1, valor2)); 
    
}

//questão 02

#include <stdio.h>
#include <math.h>

float distancia(float x0, float x1, float y0, float y1){
    
    return sqrt(pow(x0-x1,2) + pow(y0-y1,2)); 
}

int main() {
    float x0, x1, y0, y1; 
    
    printf("Insira um valor para x0:"); 
    scanf("%f", &x0);
    printf("\nInsira um valor para x1:"); 
    scanf("%f", &x1); 
    printf("\nInsira um valor para y0:"); 
    scanf("%f", &y0); 
    printf("\nInsira um valor para y1:"); 
    scanf("%f", &y1); 
    
    printf("A distância entre os pontos é de:%.1f", distancia(x0, x1, y0, y1));
}

// questão 3

#include <stdio.h>
#include <math.h>

int fatorial(int *valor){
    int i, fat=1; 
    
    for(i=1; i<=*valor; i++){
        fat *= i; 
    }
    
    return fat; 
}

int main() {
    int valor; 
    
    printf("Informe um valor:"); 
    scanf("%d", &valor); 

    printf("O valor do fatorial de %d é: %d", valor,  fatorial(&valor)); 
}
