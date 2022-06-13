#include <stdio.h>
#include <string.h>

void imprimenome (char x,char y,char r,char t,char e, char v, char i){
	printf("\n****************************************************");
	printf("\n\n*                                                  *");
	printf("\n\n                      %c%c%c%c%c%c%c                    ",x,y,r,t,e,v,i);
	printf("\n\n*                                                  *");
	printf("\n\n****************************************************\n");

}

int main(void){
	char x;
	char y;
	char r;
	char t;
	char e;
	char v;
	char i;

	printf("Escreva seu nome:  ");
	scanf("%c%c%c%c%c%c%c",&x,&y,&r,&t,&e,&v,&i);
	imprimenome(x,y,r,t,e,v,i);

	return 0;
}