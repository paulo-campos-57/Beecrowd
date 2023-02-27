//1020 - Idade em dias
#include<stdio.h>

int main() {
	
	int n;
	int dia, mes, ano;
	scanf("%d", &n);
	
	ano = n / 365;
	mes = (n % 365) / 30;
	dia = (n % 365) % 30;
	
	printf("%d ano(s)\n", ano);
	printf("%d mes(es)\n", mes);
	printf("%d dia(s)\n", dia);
	
	return 0;
}
