//Ler o valor de um lado do quadrado e apresentar: PERÍMETRO=xx, ÁREA=xx e DIAGONAL=xx

#include <stdio.h> 
#include <math.h>

int main(){ 
    int lado, perimetro, area; 
    float diagonal; 

    printf("Informe o valor do lado:");
    scanf("%d", &lado); 

    perimetro = 4*lado;
    area = lado*lado; 
    diagonal = lado*sqrt(2); 

    printf("O perimetro é:%d\nA área é:%d\nA diagonal é:%.1f\n", perimetro, area, diagonal); 

}