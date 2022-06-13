#include <stdio.h>

double conversor (double x){
   double centimetros = 0;

   centimetros = x * 2.54;
    
   return centimetros;
}

double leiaNum(void){
    int x = 0;

    printf("Digite o valor em polegada: ");
    scanf("%d", &x);
    return x;
}

double imprimir(double x){
	printf("%.2lf cm", x);
}


int main(void){
	double polegada = 0;
  double centimetros = 0;
	polegada = leiaNum();
	centimetros = conversor(polegada);
	imprimir(centimetros);

return 0;
}

