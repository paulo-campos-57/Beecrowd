//1007 - Diferença
#include<stdio.h>

int main(void) {
	
	int a, b, c, d;
	int dif;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	
	dif = ((a * b) - (c * d));
	
	printf("DIFERENCA = %d\n", dif);
	
	return 0;
}
