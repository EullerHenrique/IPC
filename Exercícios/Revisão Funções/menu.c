#include <stdio.h>

#define OPCAO_MINIMA 1
#define OPCAO_MAXIMA 4
#define SAIR OPCAO_MAXIMA 

unsigned long fatorial(unsigned long num){
	unsigned long int i = 0;
	unsigned long int fat = 0;

	i = 0;
	fat = 1;
	while(i < num){
		i = i + 1;
		fat = fat * i;
	}

	return fat;
}


unsigned long fibonacci(unsigned long n){
	unsigned long int f1 = 0; // o penúltimo número de Fibonacci calculado.
	unsigned long int f2 = 0; // o último número de FIbonnaci calculado.
	unsigned long int temp = 0; // váriavel tempóraria para guardar a soma;
	unsigned long int i = 0; // contador de iterações

	if(n == 0 || n == 1){
		return n;
	}else{
		f1 = 0;
		f2 = 1;
		temp = 0;
		i = 2;
		while(i <= n){
			temp = f1 + f2;
			f1 = f2;
			f2 = temp;
			i = i + 1;
		}

		return f2;
	}
}


void exibirOpcoes(void){
	printf("\nOpções : \n\n");
	printf("1 - fatorial: \n");
	printf("2 - n-ésimo número de Fibonacci\n");
	printf("3 - ler um novo inteiro\n");
	printf("4 - sair\n");
	printf("\n");
}

int lerOpcao(void){
	int opcao = 0;

	printf("Digite uma opção: ");
	scanf("%d", &opcao);
	while( !(OPCAO_MINIMA <= opcao && opcao <= OPCAO_MAXIMA)){
		printf("Opção inválida! \n\n");
		printf("Digite uma opção: ");
		scanf("%d", &opcao);
	}

	return opcao;
}

void imprimirResultado(int opcao, long int num, long int resultado){
	printf("\n");
	printf("----------------------------------------------------\n");
	if(opcao == 1){
		printf("Fatorial de %lu = %lu\n",num,resultado);
	}else if(opcao == 2){
		printf("%lu-ésimo número de Fibonacci = %lu\n", num, resultado);				
	}else if (opcao == 3){
		printf("Novo inteiro lido = %lu\n", num);
	}else{
		printf("Fim. \n");
	}

	printf("----------------------------------------------------\n");
	return;
}
void menu(unsigned long num){
	int opcao = 0;
	unsigned long resultado = 0;

	while(opcao != SAIR){
		exibirOpcoes();
		opcao = lerOpcao();
		if(opcao == 1){
			resultado = fatorial(num);
		} else if (opcao == 2){
			resultado = fibonacci(num);
		} else if (opcao == 3){
			printf("Digite um inteiro: ");
			scanf("%lu", & num);
		}else{
		}

		imprimirResultado(opcao,num,resultado);
	}
	return;
}

int main(void){
	unsigned long int numero = 0;
	printf("Digite um inteiro: ");
	scanf("%lu", &numero);
	menu(numero);

	return 0;
}




