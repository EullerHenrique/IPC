#include <stdio.h>
int main(void){
int x = 0;
printf("Digite um número inteiro: ");
scanf("%d", & x);

printf("O número como um caracter: %c\n", x);
printf("O número como um decimal: %d\n", x);
printf("O número como um float: %d.000000\n", x);

return 0;
}