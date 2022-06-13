#include <stdio.h>

double leiadados(void){
	double x = 0;
	scanf("%lf", &x);
return x;
}




double conversao1(double x){
	double converter1 = 0;
	converter1 = x * 1.8 + 32;
return converter1;
}

double conversao2(double x){
	double converter2 = 0;
	converter2 = (x - 32) / 1.8;
return converter2;
}



void imprima1(double x){
	printf("\nO valor convertido é: %.2lf graus Fahrenheit\n", x);
return;
}

void imprima2(double x){
	printf("\nO valor convertido é %.2lf graus Celcius\n",x);
return;
}


int menu_celcius(void){
	 system("clear"); //limpar tel


	double x = 0;
	double resultado = 0;

	printf("\nDigite a temperaura em Celcius: ");
	x = leiadados();
	resultado = conversao1(x);
	imprima1(resultado);

	
	printf("\n");
	printf("1 - Repetir cálculo\n");
	printf("2 - Sair\n\n");
	printf("Digite a opção desejada: ");


	int n = 0;
	scanf("%d", &n);
	while(!(n >= 1 && n <=2)){
		printf("Digite uma opção válida: ");
		scanf("%d", &n);
	}
	if(n == 1){
		return 2;
	}else 
	if(n == 2){
		return 1;
	}
}


int menu_fahrenheit(void){
	system("clear"); //limpar tela

	double x = 0;
	double resultado = 0;
	printf("\nDigite a temperaura em Fahrenheit: ");
	x = leiadados();
	resultado = conversao2(x);
	imprima2(resultado);
    
	printf("\n");
	printf("1 - Repetir cálculo\n");
	printf("2 - Sair\n");
	printf("Digite a opção desejada: ");

	int n = 0;
	scanf("%d", &n);
	while(!(n >= 1 && n <=2)){
		printf("Digite uma opção válida: ");
		scanf("%d", &n);
	}
	if(n == 1){
		return 3;
	}else 
	if(n == 2){
		return 1;
	}
}



int menu_principal(void){

	system("clear"); //limpar tela
	
	printf("\n\t-----------------\n\t");
	printf("\n\t----CONVERSÃO----\n\t");
	printf("\n\t-----------------\n\n");

	printf("1 - CELCIUS PARA FAHRENHEIT\n");
	printf("2 - FAHRENHEIT PARA CELCIUS\n");
	printf("3 - SAIR\n\n");
	printf("Digite a opção desejada: ");

	int n = 0;
	scanf("%d", & n);
	while ( !(n >=1 && n<=3)){
		printf("Digite uma opção válida: ");
		scanf("%d", &n);
	}
		if(n == 1){
			return 2;
		}else 
		if(n == 2){
			return 3;
		}else 
		if(n = 3){
			return 0;
		}
	}


void menu(void){
	int i = 0;

	for(i = 1; i!= 0;){
		if(i == 1){
			i = menu_principal(); // inicialmente o programa abre a função principal e guarda o seu resultado.
		}else 
		if(i == 2){             // utilização do resultado da função principal
			i = menu_celcius();
		}else
		if(i == 3){           // utilizaçao do resultado da função principal
			i = menu_fahrenheit();
		}else{	
		}
	}

    system("clear"); //limpar tela

 return; 

}


int main(void){
	menu();

return 0;
}