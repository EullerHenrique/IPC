#include <stdio.h>
int main(void){
int lista[10] = {0};
for(int i = 0; i < 5; i++)
lista[2*i+1] = i + 2;
for(int i = 0; i < 10; i++)
printf("%d\n", lista[i]);
return 0;
}