//Ler um tempo em segundos e apresentá-lo convertido em Horas:Minutos:Segundos. 

#include <stdio.h> 

int main(){
    int segundos, horas, restante, minutos;

    printf("Informe o tempo em segundos:"); 
    scanf("%d", &segundos); 
    horas = segundos/3600; 

    restante = segundos % 3600; 
    minutos = restante/60;

    printf("Em horas: %d:%d\n", horas,minutos);
}