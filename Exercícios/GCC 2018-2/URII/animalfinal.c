#include <stdio.h>
#include <string.h>

int main(void){
	char str1[13];
	char str2[13];
	char str3[13];

	scanf("%s",str1);
	scanf("%s",str2);
	scanf("%s",str3);

	if((strcmp(str1,"vertebrado") == 0) && (strcmp(str2,"ave") == 0) && (strcmp(str3,"carnivoro") == 0)){
		printf("aguia");
	}
	else
	if((strcmp(str1,"vertebrado") == 0) && (strcmp(str2,"ave") == 0) && (strcmp(str3,"onivoro") == 0)){
		printf("pomba");
	}
	else 
	if((strcmp(str1,"vertebrado") == 0) && (strcmp(str2,"mamifero") == 0) && (strcmp(str3,"onivoro") == 0)){
		printf("homem");
	}
	else
	if((strcmp(str1,"vertebrado") == 0) && (strcmp(str2,"mamifero") == 0) && (strcmp(str3,"herbivoro") == 0)){
		printf("vaca");
	}
	else
	if((strcmp(str1,"invertebrado") == 0) && (strcmp(str2,"inseto") == 0) && (strcmp(str3,"hematofago") == 0)){
		printf("pulga");
	}
	else
	if((strcmp(str1,"invertebrado") == 0) && (strcmp(str2,"inseto") == 0) && (strcmp(str3,"herbivoro") == 0)){
		printf("lagarta");
	}
	else
	if((strcmp(str1,"invertebrado") == 0) && (strcmp(str2,"anelideo") == 0) && (strcmp(str3,"hematofago") == 0)){
		printf("sanguessuga");
	}
	else
	if((strcmp(str1,"invertebrado") == 0) && (strcmp(str2,"anelideo") == 0) && (strcmp(str3,"onivoro") == 0)){
		printf("minhoca");
	}
	printf("\n");

	return 0;
}

