#include <stdio.h>
#include <string.h>

int main (void){
  int x = 0;
  int caso[1000];
  char str1[7];
  char str2[7];
  
  scanf("%d", &x);

  // int caso[5]; // vetor que armazena o resultado de cada combinação entre as strings, o seu tamanho é a quantidade de testes determinada pelo usuario 

if(x >= 1 && x <= 1000){

    for(int i = 1; i <= x; i++){ // lê todas as strings e determina o resultado da combinção delass
    scanf("%s", str1);
    scanf("%s", str2);

    if ((strcmp(str1, "ataque") == 0) && (strcmp(str2, "ataque") == 0)){
      caso[i] = 1;    
    }else if ((strcmp(str1, "pedra") == 0) && (strcmp(str2, "pedra") == 0)){
      caso[i] = 2;
    }else if ((strcmp(str1, "papel") == 0) && (strcmp(str2,"papel") == 0)){
    	caso[i] = 3;
    }else if ((strcmp(str1,"ataque") == 0) && (strcmp(str2,"papel") == 0)){
    	caso[i] = 4;   
    }else if ((strcmp(str1,"papel") == 0) && (strcmp(str2,"ataque") == 0)){
    	caso[i] = 5;
    }else if ((strcmp(str1,"pedra") == 0) && (strcmp(str2,"papel") == 0)){
    	caso[i] = 4;
    }else if ((strcmp(str1,"papel") == 0) && (strcmp(str2,"pedra") == 0)){
    	caso[i] = 5;	
    }else if ((strcmp(str1,"ataque") == 0) && (strcmp(str2,"pedra") == 0)){
    	caso[i] = 4;
    }else if ((strcmp(str1,"pedra") == 0) && (strcmp(str2,"ataque") == 0)){
    	caso [i] = 5;
    }
  }


for(int i = 1; i <= x; i++){// recebe o resultado da combinação das strings e imprime tal resultado
    if(caso[i] == 1){
       printf("Aniquilacao mutua\n");
    }else if(caso[i] == 2){
        printf("Sem ganhador\n");
    }else if(caso[i] == 3){
        printf("Ambos venceram\n");
    }else if(caso[i] == 4){
        printf("Jogador 1 venceu\n");
    }else if(caso[i] == 5){
        printf("Jogador 2 venceu\n");
    }
  }



} 
return 0;
}