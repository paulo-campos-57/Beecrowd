//1019 - Conversão de tempo
#include<stdio.h>

#define HSEG 3600

int main() {
	
	int n;
	int seg, min, hora;
	scanf("%d", &n);
	
	hora = n / HSEG;
	min = (n - (HSEG * hora)) / 60;
	seg = (n - (HSEG * hora) - (min * 60));
	
	printf("%d:%d:%d\n", hora, min, seg);
	
	return 0;
}
