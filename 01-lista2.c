
#include <stdio.h>

//1)Faça um programa completo (função main e inclusão dos arquivos de cabeçalhos adequados) que verifique se um determinado aluno foi aprovado por média , o programa deve ler 3 notas e calcular a média, caso seja maior do que 8 o aluno estará aprovado). 


int main() {
    int notas[3], soma = 0; 
    float media; 
    
    for(int i=0; i<3; i++){
        printf("Insira sua %dª notas:", i+1); 
        scanf("%d", &notas[i]); 
        soma += notas[i]; 
    }
    media  = soma/3; 
    
    if (media > 8){
        printf("Aprovado(a)!"); 
    }
    else{
        printf("Reprovado(a)!"); 
    }
}
