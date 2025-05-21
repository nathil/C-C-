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

//questões do dia 21/05

//questão 01 

#include <stdio.h>

int main() {
    int valores[10], i, soma = 0, soma_Var; 
    float media, variancia;
    
    for(i=0; i<10; i++){
        printf("informe um valor:"); 
        scanf("%d", &valores[i]); 
        
        soma += valores[i]
    }
    media = soma/10; 
    
    for(i=0; i<10; i++){
        soma_Var += pow(valores[i] - media,2); 
    }
    
    variancia = soma_Var/10; 
    
    printf("\n O valor da média é:%f", media);
    printf("\n O valor da variância é:%f", variância);
}
//questão 2
#include <stdio.h>

int main() {
    int numeros[20], i;
    
    for(i=0; i<20; i++){
        printf("Insira um valor:"); 
        scanf("%d", &numeros[i]); 
    }
    for(i=0; i<20; i++){
        if(i>10){
            printf("\n%d", numeros[i]);
        }
    }
}
//questão 3
#include <stdio.h>

int main() {
    int i, valores[100]; 
    
    for(i=0; i<100; i++){
        printf("Insira um valor:"); 
        scanf("%d", &valores[i]);
    }
    for(i=0; i<100; i++){
        if(valores[i] % 2 != 0){
            printf("\nÉ ímpar:%d", valores[i]); 
        }
    }
}
//questão 04
#include <stdio.h>

int main() {
    int i, vetor1[10], vetor2[10], vetor3[10]; 
    
    for(i=0; i<10; i++){
        printf("Insira um valor:"); 
        scanf("%d", &vetor1[i]);
    }
    for(i=0; i<10; i++){
        printf("Insira um valor:"); 
        scanf("%d", &vetor2[i]);
    }
    for(i=0; i<10; i++){
        vetor3[i] = vetor1[i]+vetor2[i]; 
    }
    for(i=0; i<10; i++){
        printf("\n%d", vetor3[i]); 
    }
}
//n! = n * (n-1)! (fórmula recursiva fatorial)
