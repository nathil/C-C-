//Ler quatro valores reais e apresentar a média ponderada, considerando os pesos 1, 2, 3 e 4, respectivamente. 


#include <stdio.h>
#include <stdlib.h> 

float media(float *vetor, int *vetor_peso, int tamanho){
    float soma = 0; 
    int soma_pesos = 0; 

    for(int i=0; i<tamanho; i++){
        soma  += (vetor_peso[i] * vetor[i]);  
        soma_pesos += vetor_peso[i]; 
    }
    
    return soma/soma_pesos;  

}


int main(){
    int tamanho; 
    float* vetor = malloc(sizeof(float)*tamanho);
    int* peso = malloc(sizeof(int)*tamanho); 

    printf("Informe o tamanho do vetor:"); 
    scanf("%d", &tamanho);

    for(int i = 0; i<tamanho; i++){
        printf("Insira a nota:"); 
        scanf("%f", &vetor[i]); 
        printf("Insira o peso da nota:"); 
        scanf("%d", &peso[i]);
    }

    printf("A média ponderada é: %.2f", media(vetor, peso, tamanho)); 
}