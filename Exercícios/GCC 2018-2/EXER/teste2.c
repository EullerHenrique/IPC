// #include <stdio.h>
//void funBidir( int *ax, int* ay){
//	*az = *ax + 2;
//	*ad = *ay/ *ax;
//}

//int main(void){
//	int a = 2;
//	int b = 6;

//	funBidir(&a, &b);
//	printf("%d %d\n", a, b);
 //   return 0;
 //}

#include<stdio.h>

int funBidir(int ax, int bx){
    int resultado = 0;
    resultado = ax + bx;

return resultado;
} // precisa de um endereço pois tal funçao deve devolve um resultado, tal resultado deve ser enviado para a função chamadora.


int main(void){
	int result = 0;
	int a = 2;
	int b = 6;

	result = funBidir(b a,b);
	printf("%d\n", result);
	return 0;


}
