//1010 - Cálculo simples
#include<stdio.h>

int main(void) {
	
	int cod_a, qtd_a;
	double valor_a;
	int cod_b, qtd_b;
	double valor_b;
	double total;
	scanf("%d %d %lf", &cod_a, &qtd_a, &valor_a);
	scanf("%d %d %lf", &cod_b, &qtd_b, &valor_b);
	
	total = (valor_a * qtd_a) + (valor_b * qtd_b);
	
	printf("VALOR A PAGAR: R$ %.2lf\n", total);
	
	return 0;
}
