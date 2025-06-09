//Ler o raio de um círculo e apresentar: PERÍMETRO=xx e ÁREA=xx

#include <stdio.h> 
#include <math.h>

int main(){
    float raio, perimetro, area; 

    printf("Informe o valor do raio:"); 
    scanf("%f", &raio); 
    
    perimetro = 2*raio*3.14; 
    area = pow(raio,2)*3.14; 

    printf("O valor do raio é:%.1f\nO valor do perimetro é:%.1f\nO valor da área é:%.1f\n", raio, perimetro, area); 
}