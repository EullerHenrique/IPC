#include <stdio.h>

void imprimeMes (int primeiroDia, int dias){
	int diaSemana = 0;

	printf("Dom Seg Ter Qua Qui Sex Sab\n");
	printf("--- --- --- --- --- --- ---\n");

	for(diaSemana = 0; diaSemana < primeiroDia; diaSemana++){
		printf("    ");
	}
	for(int diaMes = 1; diaMes <= dias; diaMes++){
		if(diaSemana > 6){
			printf("\n");
			diaSemana = 1;			
		}else{
			diaSemana++;
		}
		printf("%3d ", diaMes);
	}

	printf("\n--- --- --- --- --- --- ---\n");

return;
}


int main (void){
	imprimeMes(5,30);
	imprimeMes(1,29);
	return 0;
}

