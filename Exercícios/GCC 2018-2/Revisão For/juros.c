#include <stdio.h>

int main(void){
	double capital = 0.0;
	double montante = 0.0;
	double taxa = 0.0;
	int anos = 0;
	int i = 0;

	printf("Entre com o valor inicial: ");
	scanf("%lf", &capital);
	printf("Entre com a taxa de juros anual (nn.n): ");
	scanf("%lf", &taxa);
	printf("Entre com o número de anos: ");
	scanf("%d", &anos);

	printf("\n Ano      Valor\n");
	printf("==== ================\n");

	for(montante = capital, i = 1; i <= anos; i++){
		montante = montante * (1 + taxa/100.0);
		printf("%3d%11.2lf\n", i, montante);
    }
    return 0;
}