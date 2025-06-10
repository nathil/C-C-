//verificar se um número é primo 

#include <stdio.h> 

int main(){
    int numero, cont_primos = 0; 
    
    printf("Informe um valor:"); 
    scanf("%d", &numero); 

    for(int i=2; i<numero; i++){ 
        if(numero % i == 0){
            cont_primos += 1; 
        }
    }
    
    if(cont_primos > 0){
        printf("nao e primo."); 
    }
    else{
        printf("e primo."); 
    }
}