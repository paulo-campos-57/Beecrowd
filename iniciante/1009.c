//1009 - Salário com bônus
#include<stdio.h>

int main(void) {
	
	char nome[20];
	double salario_fixo, montante_vendas;
	double salario_final;
	scanf("%s", nome);
	scanf("%lf", &salario_fixo);
	scanf("%lf", &montante_vendas);
	
	salario_final = salario_fixo + (montante_vendas * 0.15);
	
	printf("TOTAL = R$ %.2lf\n", salario_final);
	
	return 0;
}
