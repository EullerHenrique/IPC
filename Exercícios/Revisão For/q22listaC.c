#include <stdio.h>
int main(void){
int lista[10] = {2, 1, 2, 4, 1, 2, 0, 2, 1, 2};
int linha[10];
for(int i = 0; i < 10; i++)
linha[i] = lista[9 - i];
for(int i = 0; i < 10; i++)
printf("%d %d\n", lista[i], linha[i]);
return 0;
}