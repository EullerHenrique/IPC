#include <stdio.h>

int main(void){
	int n = 0;
	int bin[64] = {0}; // tamanho máximo = binário com capacidade de armanezar 64 bits
    int i = 0;

printf("Digite um número decimal: ");
scanf("%d",&n);

while(n!= 0){
	bin[i] = n % 2; // ex : bin[0] = 1 / 2 = 1
	n = n / 2; // 1/ 2 = 0
	i ++; // i = 1
}

i--; // se esse i não for retirado o próximo while tentará imprimir o bin[1], como nenhum valor foi armazenado em bin[1], o laço irá imprimir o valor padrão do bin[1], isto é, 0.


printf("O número em binário é: ");
while(i >= 0){
	printf("%d",bin[i]);
	i --;
}

printf("\n");

return 0;
}