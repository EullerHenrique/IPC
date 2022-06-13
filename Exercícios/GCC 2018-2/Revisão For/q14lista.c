#include <stdio.h>
int main(void){
int a = 0;
int b = 0;
int c = 0;
int d = 0;


scanf("%d %d %d %d", &a, &b, &c, &d);

if(a > b && a > c && a > d){
	printf("Maior = %d\n", a);	
}else
if(b > c && b > d){
	printf("Maior = %d\n", b);
}else
if(c > d){
	printf("Maior = %d\n", c);
}else{
	printf("Maior = %d\n", d);
}

return 0;

}