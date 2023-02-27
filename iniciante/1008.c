//1008 - Salário
#include <stdio.h>
 
int main() {
 
    int cod_func, num_horas;
    float valor_hora, salario_final;
    
    scanf("%d", &cod_func);
    scanf("%d", &num_horas);
    scanf("%f", &valor_hora);
    
    salario_final = num_horas * valor_hora;
    
    printf("NUMBER = %d\n", cod_func);
    printf("SALARY = U$ %.2f\n", salario_final);
    
    return 0;
}
