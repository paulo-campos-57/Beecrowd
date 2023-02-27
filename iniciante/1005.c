//1005 - Média 1
#include<stdio.h>

int main(void) {
	
	float nota_a, nota_b;
	float media;
	scanf("%f", &nota_a);
	scanf("%f", &nota_b);
	
	media = ((nota_a * 3.5) + (nota_b * 7.5)) / 11;
	
	printf("MEDIA = %.5f\n", media);
	
	return 0;
}
