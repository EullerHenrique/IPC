#include <stdio.h>
void triangulo1(int x){  
  for (int linha = 1; linha <= x ; linha ++){
        for(int num = 1; num <= linha; num ++){
            printf("*");
        }
        printf("\n");
  }
return;
}

void triangulo2(int y){
  for (int linha = y ; linha >= 1; linha --){
       for(int num = 1; num <= linha; num ++){
       printf("*");
       }
       printf("\n");
  }
return;
}


int main (void){
  int limite = 0;
  printf("Digite um número: ");
  scanf("%d",&limite);
  triangulo1(limite);
  triangulo2(limite);
return 0;
}
