//1006 - Média 2
#include<stdio.h>

int main(void) {
	
	double a, b, c;
	double media;
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	
	media = ((a* 2) + (b * 3) + (c * 5)) / 10;
	
	printf("MEDIA = %.1lf\n", media);
	
	return 0;
}
