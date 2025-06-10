#include <stdio.h> 

int main(){
    int matricula, num_dependentes, ano_admissao, bienio, bonus_dep; 
    float salario, reajuste, sal_liquido, inss, imposto_renda, plano_saude, bonus, despesas; 

    printf("Informe a sua matricula:\n"); 
    scanf("%d", &matricula); 
    printf("Informe o seu salario:\n"); 
    scanf("%f", &salario); 
    printf("Informe o ano de admissao:\n");
    scanf("%d", &ano_admissao);
    printf("Informe o total de dependentes:"); 
    scanf("%d", &num_dependentes); 

    reajuste = salario*0.1; 
    bienio = 100 * ((2025 - ano_admissao)/2); 
    bonus_dep = 50*num_dependentes; 

    inss = 0.25*salario; 
    imposto_renda = (salario - inss)*0.5; 
    plano_saude = 75*(num_dependentes-1); 
    
    bonus = reajuste + bienio + bonus_dep; 
    despesas = inss + imposto_renda + plano_saude; 

    sal_liquido = salario + reajuste - despesas; 

    printf("O salario liquido e:%.2f\n",sal_liquido); 
}