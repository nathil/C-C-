//Ler as notas obtidas por 5 alunos, calcular a média entre as notas lidas e apresentá-la

#include <stdio.h> 
#include <stdlib.h>

float media(float *vetor, int tamanho){ 
    float soma = 0, media; 

    for(int i = 0; i < tamanho; i++){
        soma += vetor[i]; 
    }

    return media = soma/tamanho; 
}

int main(){
    int tamanho; 
    
    printf("Informe o tamanho do vetor:"); 
    scanf("%d", &tamanho); 
    
    float* vetor = malloc(sizeof(float) * tamanho); 

    for(int i=0; i<tamanho; i++){
        printf("Insira o valor:"); 
        scanf("%f", &vetor[i]); 
    }
    printf("O valor da média das notas é:%.2f\n", media(vetor, 5));      
}