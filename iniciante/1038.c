//1038 - Lanche
#include <stdio.h>
 
int main() {
 
    int cod, qtd;
    float valor_final;
    
    scanf("%d %d", &cod, &qtd);
    
    if (cod == 1) {
        valor_final = qtd * 4.0;
    } else if (cod == 2) {
        valor_final = qtd * 4.5;
    } else if (cod == 3) {
        valor_final = qtd * 5.0;
    } else if (cod == 4) {
        valor_final = qtd * 2.0;
    } else if (cod == 5) {
        valor_final = qtd * 1.5;
    }
    
    printf("Total: R$ %.2f\n", valor_final);
    
    return 0;
}
