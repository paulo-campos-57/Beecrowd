//1012 - Área
#include<stdio.h>
#include<math.h>

#define PI 3.14159

int main(void) {
	
	double a, b, c;
	double area_tri, area_circ, area_trap, area_quad, area_ret;
	scanf("%lf %lf %lf", &a, &b, &c);
	
	area_tri = (a * c) / 2.0;
	area_circ = PI * (pow(c, 2));
	area_trap = ((a + b) * c) / 2.0;
	area_quad = pow(b, 2);
	area_ret = a * b;
	
	printf("TRIANGULO: %.3lf\n", area_tri);
	printf("CIRCULO: %.3lf\n", area_circ);
	printf("TRAPEZIO: %.3lf\n", area_trap);
	printf("QUADRADO: %.3lf\n", area_quad);
	printf("RETANGULO: %.3lf\n", area_ret);
	
	return 0;
}
