//Calcular a estatística desvio padrão,de cinco números. A fórmula requerida é: 

#include <stdio.h>
#include <math.h>

int main(){
    float desvio_p, vetor[5], soma = 0, media, somatorio = 0; 

    for(int i=0; i<5; i++){
        printf("Informe um valor:"); 
        scanf("%f", &vetor[i]); 

        soma += vetor[i]; 
    }

    media = soma/5.0; 

    for(int i=0; i<5; i++){
        somatorio += (vetor[i] - media, 2); 
    }

    desvio_p = somatorio/4;

    printf("O desvio padrao e:%.2f", desvio_p); 
}