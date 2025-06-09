//Ler a notas da PR1 e PR2 e apresentar: MÉDIA REAL=xx, MÉDIA TRUNCADA=xx 


#include <stdio.h>

int main(){
    float nota1, nota2, media; 

    printf("Informe o valor da primeira nota:");
    scanf("%f", &nota1); 
    printf("Informe o valor da segunda nota:");
    scanf("%f", &nota2); 

    media = (nota1 + nota2)/2; 

    printf("O valor da média real é:%.2f\nO valor da média truncada é:%d\n", media, (int) media); 
}