//Ler a base e a altura de um retângulo e apresentar: PERIMETRO=xx, AREA=xx e DIAGONAL=xx

#include <stdio.h>
#include <math.h> 


int main(){
    float altura, base, perimetro, area, diagonal, diagonal_soma; 

    printf("Insira a altura:");
    scanf("%f", &altura);
    printf("Insira a base:");
    scanf("%f", &base);

    perimetro = 2*base + 2*altura; 
    area = base*altura; 
    diagonal_soma = pow(altura,2) + pow(base, 2); 
    diagonal = sqrt(diagonal_soma); 

    printf("O perimetro é:%.1f\nA área é:%.1f\nA diagonal é:%.1f\n", perimetro, area, diagonal); 
}