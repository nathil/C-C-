//Considere as equações de movimento para calcular a posição (s) e velocidade (v) de uma partícula em um determinado instante
//t, dado sua aceleração a, posição inicial s0 e velocidade inicial v0, de acordo com as fórmulas:

#include <stdio.h>
#include <math.h> 

int main(){
    float posicao_form, velocidade_form, pos_inicial, vel_inicial, aceleracao, instante; 

    printf("Informe a posicao incial:");
    scanf("%f", &pos_inicial); 
    printf("Informe a velocidade incial:"); 
    scanf("%f", &vel_inicial); 
    printf("Informe a aceleracao:"); 
    scanf("%f", &aceleracao); 
    printf("Informe o instante:"); 
    scanf("%f", instante); 

    posicao_form = (pos_inicial + vel_inicial + (aceleracao*pow(instante,2)))/2; 
    velocidade_form = vel_inicial + (aceleracao*instante); 

    printf("O valor da posicao e:%.2f\n", posicao_form);
    printf("O valor da velocidade e:%.2f\n", velocidade_form);    
}
