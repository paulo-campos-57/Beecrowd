//1040 - Média 3
#include<stdio.h>

int main() {
	
	float n1, n2, n3, n4, media;
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
	
	media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10;
	
	printf("Media: %.1f\n", media);
	if (media >= 7) {
		printf("Aluno aprovado.\n");
	} else if (media < 7 && media >= 5) {
		float ne, mediaf;
		printf("Aluno em exame.\n");
		scanf("%f", &ne);
		
		mediaf = (media + ne) / 2;
		
		printf("Nota do exame: %.1f\n", ne);
		if (mediaf >= 5) {
			printf("Aluno aprovado.\n");
		} else {
			printf("Aluno reprovado.\n");
		}
		printf("Media final: %.1f\n", mediaf);
	} else {
		printf("Aluno reprovado.\n");
	}
	
	return 0;
}
