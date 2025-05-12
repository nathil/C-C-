#include <stdio.h>

int main(){
    int M1, M2, M3 = 10, metade;
    
    printf("Insira um valor inteiro:");
    scanf("%d", &M1); 
    
    M2 = M1 + 8; 
    
    printf("\nO valor da variável M1 é: %d", M1);
    printf("\nO valor da variável M2 é: %d", M2);
    printf("\nO valor da variável M3 é: %d", M3);
    
    M3 = M1 + M2;
    
    metade = 3*(M3/2); 
    
    M3 = M3 + 1;
    
    printf("\nO valor final da variável M3 é: %d", M3);
    
}
