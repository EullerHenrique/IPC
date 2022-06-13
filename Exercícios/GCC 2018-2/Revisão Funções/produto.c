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




