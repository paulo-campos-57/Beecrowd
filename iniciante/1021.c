//1021 - Notas e moedas
#include<stdio.h>

int main() {
	
	double dinheiro_total;
	int notas, moedas;
	int cem, cinq, vint, dez, cinc, dois;
	int mum, mcinq, mvinc, mdez, mcinc, mumc;
	scanf("%lf", &dinheiro_total);
	
	notas = dinheiro_total;
	moedas = ((dinheiro_total - notas) * 100);
	cem = notas / 100;
	notas = notas - (cem * 100);
	cinq = notas / 50;
	notas = notas - (cinq * 50);
	vint = notas / 20;
	notas = notas - (vint * 20);
	dez = notas / 10;
	notas = notas - (dez * 10);
	cinc = notas / 5;
	notas = notas - (cinc * 5);
	dois = notas / 2;
	notas = notas - (dois * 2);
	mum = notas;
	notas = notas - mum * 1;
	mcinq = moedas / 50;
	moedas = moedas - (mcinq * 50);
	mvinc = moedas / 25;
	moedas = moedas - (mvinc * 25);
	mdez = moedas / 10;
	moedas = moedas - (mdez * 10);
	mcinc = moedas / 5;
	moedas = moedas - (mcinc * 5);
	mumc = moedas;
	
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", cem);
	printf("%d nota(s) de R$ 50.00\n", cinq);
	printf("%d nota(s) de R$ 20.00\n", vint);
	printf("%d nota(s) de R$ 10.00\n", dez);
	printf("%d nota(s) de R$ 5.00\n", cinc);
	printf("%d nota(s) de R$ 2.00\n", dois);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", mum);
	printf("%d moeda(s) de R$ 0.50\n", mcinq);
	printf("%d moeda(s) de R$ 0.25\n", mvinc);
	printf("%d moeda(s) de R$ 0.10\n", mdez);
	printf("%d moeda(s) de R$ 0.05\n", mcinc);
	printf("%d moeda(s) de R$ 0.01\n", mumc);
	
	return 0;
}
