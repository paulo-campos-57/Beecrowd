//1002 - Área do círculo
#include <stdio.h>
#include <math.h>
 
int main() {
    
	double raio, area;
	double n;
	n = 3.14159;
	scanf("%lf", &raio);
	
	area = n * (pow(raio, 2));
	
	printf("A=%.4lf\n", area);
 
    return 0;
}
