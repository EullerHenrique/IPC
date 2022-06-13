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