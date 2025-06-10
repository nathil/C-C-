//calcular a area de um retângulo

 #include <stdio.h>

 int main(){
    float t, area, l1, l2, l3; 

    printf("Informe o primeiro lado:"); 
    scanf("%f", &l1);
    printf("Informe o segundo lado:"); 
    scanf("%f", &l2);
    printf("Informe o terceiro lado:"); 
    scanf("%f", &l3);

    t= (l1 + l2 + l3)/2; 
    area = t*(t-l1)*(t-l2)*(t-l3); 

    printf("o valor da area do retangulo e:%.2f", area); 
 }