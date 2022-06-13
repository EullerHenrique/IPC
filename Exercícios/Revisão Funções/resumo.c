Funções void sem parâmetros

Este tipo de função não recebe parâmetros e não retorna coisa
alguma. 

Ela somente possui efeitos colaterais, tais como exibir uma
mensagem, e é usada apenas por estes efeitos.
Ela pode ler números.

void cumprimento(void) {
printf("Bom dia!");
return;
} // cumprimento

A chamada desta função requer o uso de parênteses:
cumprimento();





Funções void com parâmetros

Este tipo de função recebe parâmetros mas não retorna coisa
alguma.

Ela pode printar números.
Ela pode realizar contas, ler números e enviar os dados para a função chamadora por meio de apontadores.

void imprimeInteiro(int x) {
printf("%d\n", x);
return;
} // imprimeInteiro

A chamada desta função também requer o uso de parênteses:
imprimeInteiro(10);

Ex:
#include <stdio.h>
void imprimeInteiro(int x){
     printf("%d\n",x);
     return;
}

int main(void){
    int a = 0;

    a =5;
    imprimeInteiro(a);

    a = 33;
    imprimeInteiro(a);

    return 0;
}





Funções sem parâmetros que retornam um valor


Este tipo de função não recebe parâmetros mas retorna um valor.

O uso mais comum desta forma de função é na leitura de dados do
teclado ou de um arquivo, retornando a informação lida para a
chamadora.

int leiaQuantidade(void){
	int x;
	printf("Digite a quantidade: ");
	scanf("%d", &x);
	return x;
} // leiaQuantidade

Um exemplo de uso de leiaQuantidade na função main:

int main(void){
	int quant = 0;
	quant = leiaQuantidade();
	return 0;
} // main



Funções com parâmetros que retornam um valor

Abaixo temos um exemplo desta forma de função sendo definida e
usada:

#include <stdio.h>

int quadrado(int x){
    return x * x;
}

int main(void){
   int a = 0;
   int b = 0;

   scanf("%d", &a);
   b = quadrado(a);

   printf("%d ao quadrado é %d\n", a, b);
   printf("%d ao quadrado é %d\n", 5, quadrado(5));

   return 0;
}

ex:

#include <stdio.h>

int leiaNum(void){
    int x = 0;

    printf("Digite a quantidade: ");
    scanf("%d", &x);
    return x;
}

int quadrado(int x){
    return x * x;
}

void imprimeInteiros(int x){
    printf("%d\n", x);
    return;
}

int main(void){
	int a = 0;
	int b = 0;

	a = leiaNum();
	b = quadrado(a);
	imprimeInteiros(b);

	return 0;
}



































#include <stdio.h>

int multiplica(int x, int y){
    return x * y;
}

int main(void){
   int multiplicador = 0;
   int multiplicando = 0;
   int produto = 0;

   printf("Digite dois inteiros: ");
   scanf("%d%d", &multiplicador, &multiplicando);
   produto = multiplica(multiplicador, multiplicando);
   printf("O produto de %d por %d é %d\n", multiplicador, multiplicando, produto);
   
   return 0;
}




