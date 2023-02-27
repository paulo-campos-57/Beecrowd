//1013 - O maior
#include<stdio.h>

int main(void) {
	
	int a, b, c;
	int maiorAB, maiorABC;
	scanf("%d %d %d", &a, &b, &c);
	
	maiorAB = (a + b + (abs(a - b))) / 2;  // abs retorna o valor absoluto da operação
	maiorABC = (c + maiorAB + (abs(c - maiorAB))) / 2;
	
	printf("%d eh o maior\n", maiorABC);
	
	return 0;
}
