//1014 - Consumo
#include<stdio.h>

int main(void) {
	
	int dist;
	double combst, consm;
	scanf("%d", &dist);
	scanf("%lf", &combst);
	
	consm = dist / combst;
	
	printf("%.3lf km/l\n", consm);
		
	return 0;
}
