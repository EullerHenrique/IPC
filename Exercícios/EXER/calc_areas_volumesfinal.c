/**
* @file calc_areas_volumes.c
* @brief O programa cálculará área ou volume de determinadas formas geométrica.
*          O usuário escolherá, primeiro, entre: 1 - Cálculo de área; 2 - Cálculo de volume; 3 - Sair(esta fechará o programa). 
*          Caso o usuário tenha escolhido a opção 1 ou a opção 2, escolherá a forma geométrica desejada logo em seguida, depois digitará 
*          as medidas da forma, que serão solicitadas adequadamente ao usuário, e por fim o resultado será impresso na tela.
*          Por ultimo o usuário escolherá entre: 1 - Repetir o cálculo com novos valore; 2 - Retornar à seleção de formas.
* 
* Serão usadas 24 funções, entre elas: 1 função que lerá e validará todos os dados (seleção de opções, valores das medidas das formas) 
* entrados pelo usuário (função: "leiaDados"); 17 funções que, através do "leiaDados", lerão as medidas necessárias para o cálculo e calcularão 
* as áreas ou os volumes (9 funções para área: Padrão: "areaNome_da_forma"; 8 funções para volumes: Padrão:"volumeNome_da_forma") de todas as 
* formas (uma função para cada forma) dispóniveis no programa; 5 funções para menus, sendo 4 para imprimi-los, e por meio da função "leiaDados",
* ler as escolhas do usuário e encaminhá-las para o cálculo da forma solicitada (funções: "menu_1", "menu_2", "menu_3", "menu_4") 
* e uma função menu (função:"menu") para conectar e organizar os 3 menus (no caso do menu_4, esse será chamado pelas funções menu_2 e menu_3),
* que dependendo do retorno de cada menu dará inicio ao que for necessário ou finalizar o programa;
* A última função é a "main", que somente dará inicio à função "menu".

* @author Mateus Herrera Gobetti Borges
* @author Euller Henrique Bandeira Oliveira
* @date 03/11/2018
* @bugs Nenhum conhecido.
*/

#include <stdio.h>
#include <stdlib.h>
#define M_PI 3.14159265358979323846 //valor de PI

double leiaDados(int a){ //a - tipo de validação(1 - opção para menu_1; 2 - opção para menu_2; 3 - opção para menu_3; 4 - opção para menu_4; 5 - opção para medidas
  
  double o = 0;
  double x = 0.0;
  
  if(a == 1){ //menu_1
    
    scanf("%lf", &o); //ler opção
    
    while(o != 1.0 && o != 2.0 && o != 3.0){ //verificar validade da opção digitada
      
      printf("Opção inválida!!\n");
      printf("Digite uma opção válida: ");
      scanf("%*[^\n]");
      scanf("%*c");
      scanf("%lf", &o); //ler opção
    } //while
    
    return o;
  }else if(a == 2){ //menu_2
    
    scanf("%lf", &o); //ler opção
    
    while(o != 1.0 && o != 2.0 && o != 3.0 && o != 4.0 && o != 5.0 && o != 6.0 && o != 7.0 && o != 8.0 && o != 9.0 && o != 10.0){ //verificar validade da opção digitada
      
      printf("Opção inválida!!\n");
      printf("Digite uma opção válida: ");
      scanf("%*[^\n]");
      scanf("%*c");
      scanf("%lf", &o); //ler opção
    } //while
    
    return o;
  }else if(a == 3){ //menu_3
    
    scanf("%lf", &o); //ler opção
    
    while(o != 1.0 && o != 2.0 && o != 3.0 && o != 4.0 && o != 5.0 && o != 6.0 && o != 7.0 && o != 8.0 && o != 9.0){ //verificar validade da opção digitada
      
      printf("Opção inválida!!\n");
      printf("Digite uma opção válida: ");
      scanf("%*[^\n]");
      scanf("%*c");
      scanf("%lf", &o); //ler opção
    } //while
    
    return o;
  }else if(a == 4){ //menu_4
    
    scanf("%lf", &o); //ler opção
    
    while(o != 1 && o != 2){ //verificar validade da opção digitada
      
      printf("Opção inválida!!\n");
      printf("Digite uma opção válida: ");
      scanf("%*[^\n]");
      scanf("%*c");
      scanf("%lf", &o); //ler opção
    } //whille
    
    return o;
  }else if(a == 5){ //valor para cálculo
    
    scanf("%lf", &x); //ler opção
    
    while(x <= 0.0){ //verificar validade do valor digitado
      
      printf("Valor inválido!!\n");
      printf("Digite um valor válido: ");
      scanf("%*[^\n]");
      scanf("%*c");
      scanf("%lf", &x); //ler opção
    } //while
    
    return x;
  }else{
  } //else
} //leiaDados


/**
* @brief Esta função calcula a área de um triângulo por meio de dois dados que são inseridos pelo usuário : o valor da base do        		      
*        triângulo e o valor da altura do triâgulo. Tais dados são lidos por meio da função leiaDados(5), que além de ler,  
*        valida ou invalida os valores digitados pelo usuário, se cada valor lido for válido o calculo (base*altura)/2.0 será 
*        realizado e impresso logo em seguida.    
*/
void areaTriangulo(void){ //triângulo
  
  double base = 0.0; //valor da base
  double altura = 0.0; //valor da altura
  double area = 0.0; //valor da área
  
  printf("\t=====================\n");
  printf("\t  Área do Triângulo\n");
  printf("\t=====================\n");
  
  printf("\nDigite o valor da base: ");
  base = leiaDados(5); //ler valor da base
  printf("\nDigite o valor da altura: ");
  altura = leiaDados(5); //ler valor da altura
  
  area = (base * altura) / 2.0; //cálculo da área
  printf("\nÁrea\n\t%.2lf cm²\n", area);
  
  return;
} //areaTriangulo

/**
* @brief Esta função calcula a área de um paralelogramo por meio de dois dados que são inseridos pelo usuário : o valor da base do  paralelogramo 
*        e o valor da altura do paralelogramo. Tais dados são lidos por meio da função leiaDados(5), que além de ler, valida ou invalida os valores 
*        digitados pelo usuário, se cada valor lido for válido o calculo (base*altura) será realizado e impresso logo em  seguida.    
*/
void areaParalelogramo(void){ //paralelogramo
  
  double base = 0.0; //valor da base
  double altura = 0.0; //valor da altura
  double area = 0.0; //valor da área
  
  printf("\t=========================\n");
  printf("\t  Área do Paralelogramo\n");
  printf("\t=========================\n");
  
  printf("\nDigite o valor da base: ");
  base = leiaDados(5); //ler valor da base
  printf("\nDigite o valor da altura: ");
  altura = leiaDados(5); //ler valor da altura
  
  area = base * altura; //cálculo da área
  printf("\nÁrea\n\t%.2lf cm²\n", area);

  return;
} //areaParalelogramo


/**
* @brief Esta função calcula a área de um losango por meio de dois dados que são inseridos pelo usuário : o valor da maior diagonal do losango 
*        e o valor da menor diagonal do losango. Tais dados são lidos por meio da função leiaDados(5), que além de ler, valida ou invalida 
*        os valores digitados pelo usuário, se cada valor lido for válido o calculo (diagonal_a * diagonal_b/2.0 será realizado e impresso 
*        logo em seguida.    
*/

void areaLosango(void){ //losango
  
  double diagonal_a = 0.0; //valor da diagonal_a
  double diagonal_b = 0.0; //valor da diagonal_b
  double area = 0.0; //valor da área
  
  printf("\t===================\n");
  printf("\t  Área do Losango\n");
  printf("\t===================\n");
  
  printf("\nDigite o valor de uma diagonal: ");
  diagonal_a = leiaDados(5); //ler valor da diagonal_a
  printf("\nDigite o valor da outra diagonal: ");
  diagonal_b = leiaDados(5); //ler valor da diagonal_b
  
  area = (diagonal_a * diagonal_b) / 2.0; //cálculo da área
  printf("\nÁrea\n\t%.2lf cm²\n", area);

  return;
} //areaLosango
/**
* @brief Esta função calcula a área de um quadrado por meio de um dado que é inserido pelo usuário : o valor do lado do quadrado. 
*        Tal dado é lido por meio da função leiaDados(5), que além de ler, valida ou invalida o valor digitado pelo usuário, se o valor lido
*        for válido o cálculo (lado * lado) será realizado e impresso logo em  seguida.    
*/
void areaQuadrado(void){ //quadrado
  
  double lado = 0.0; //valor do lado
  double area = 0.0; //valor da area
  
  printf("\t====================\n");
  printf("\t  Área do Quadrado\n");
  printf("\t====================\n");
  
  printf("\nDigite o valor do lado: ");
  lado = leiaDados(5); //ler valor do lado
  
  area = lado * lado; //cálculo da área
  printf("\nÁrea\n\t%.2lf cm²\n", area);
  
  return;
} //areaQuadrado
/**
* @brief Esta função calcula a área de um retangulo por meio de dois dados que são inseridos pelo usuário : o valor da base do retângulo 
*        e o valor da altura do reângulo. Tais dados são lidos por meio da função leiaDados(5), que além de ler, valida ou invalida os valores
*         digitados pelo usuário, se os valores lidos forem válidos o cálculo (base * altura) será realizado e impresso logo em  seguida.    
*/

void areaRetangulo(void){ //retângulo
  
  double base = 0.0; //valor da base
  double altura = 0.0; //valor da altura
  double area = 0.0; //valor da área
  
  printf("\t=====================\n");
  printf("\t  Área do Retângulo\n");
  printf("\t=====================\n");
  
  printf("\nDigite o valor da base: ");
  base = leiaDados(5); //ler valor da base
  printf("\nDigite o valor da altura: ");
  altura = leiaDados(5); //ler valor da altura
  
  area = base * altura; //cálculo da área
  printf("\nÁrea\n\t%.2lf cm²\n", area);
  
  return;
} //areaRetangulo

/**
* @brief Esta função calcula a área de um Circulo por meio de um dado que é inserido pelo usuário(o valor do raio do círculo) 
*        e da constante M_PI definida no começo deste programa. O dado é lido por meio da função leiaDados(5), que além de ler, valida 
*        ou invalida o valor digitado pelo usuário, se o valor lido for válido o calculo M_PI * (raio * raio) será realizado e impresso 
*        logo em  seguida.    
*/

void areaCirculo(void){ //círculo
  
  double raio = 0.0; //valor do raio
  double area = 0.0; //valor da área
  
  printf("\t===================\n");
  printf("\t  Área do Círculo\n");
  printf("\t===================\n");
  
  printf("\nDigite o valor do raio: ");
  raio = leiaDados(5); //ler valor do raio
  
  area = M_PI * (raio * raio); //cálculo da área
  printf("\nÁrea\n\t%.2lf cm²\n", area);
  
  return;
} //areaCirculo
/**
* @brief Esta função calcula a área de um setor circular por meio de dois dados que são inseridos pelo usuário : o valor do raio do setor circular
*        e o valor do ângulo do setor circular. Tais dados são lidos por meio da função leiaDados(5), que além de ler, valida ou invalida os valores
*        digitados pelo usuário, se o valor lido for válido o cálculo ((raio * raio) * angulo)/2.0 será realizado e impresso logo em seguida.    
*/
void areaSetorcircular(void){ //setor circular
  
  double raio = 0.0; //valor do raio
  double angulo = 0.0; //valor do ângulo
  double area = 0.0; //valor da área
  
  printf("\t==========================\n");
  printf("\t  Área do Setor Circular\n");
  printf("\t==========================\n");
  
  printf("\nDigite o valor do raio: ");
  raio = leiaDados(5); //ler valor do raio
  printf("\nDigite o valor do ângulo, em radianos: ");
  angulo = leiaDados(5); //ler valor do ângulo
  
  area = ((raio * raio) * angulo) / 2.0; //cálculo da área
  printf("\nÁrea\n\t%.2lf cm²\n", area);

  return;
} //areaSetorcircular

/**
* @brief Esta função calcula a área de uma coroa circular por meio de dois dados que são inseridos pelo usuário : o valor do raio maior da coroa
*        circular o valor do raio menor da coroa circular. Tais dados são lidos por meio da função leiaDados(5), que além de ler, valida 
*        ou invalida os valores digitados pelo usuário. Nesta função uma nova condição para o valor ser válido é inserida, ou seja, o raio
*        maior deve ser maior que o raio menor, enquanto o usuário não digitar o valor correto o cálculo não será realizado. Assim que o valor
*        for considerado válido pela função leiaDados(5) inserida no laço condicional while, o cálculo 
*         M_PI * ((raio_maior * raio_maior) - (raio_menor * raio_menor)) será realizado e impresso logo em seguida.
*/

void areaCoroacircular(void){ //coroa circular

  double raio_maior = 0.0; //valor do raio maior
  double raio_menor = 0.0; //valor do raio menor
  double area = 0.0; //valor da área
  
  printf("\t==========================\n");
  printf("\t  Área da Coroa Circular\n");
  printf("\t==========================\n");
  
  printf("\nDigite o valor do raio maior: ");
  raio_maior = leiaDados(5); //ler valor do raio maior
  printf("\nDigite o valor do raio menor: ");
  raio_menor = leiaDados(5); //ler valor do raio menor
  
  while(raio_maior <= raio_menor){ //caso tenha se digitado o raio maior menor que o raio menor
    
    printf("O raio maior deve ser MAIOR que o raio menor!!\n");
    printf("\nDigite o valor do raio maior: ");
    raio_maior = leiaDados(5); //ler valor do raio maior
    printf("\nDigite o valor do raio menor: ");
    raio_menor = leiaDados(5); //ler valor do raio menor
  } //while
  
  area = M_PI * ((raio_maior * raio_maior) - (raio_menor * raio_menor)); //cálculo da área
  printf("\nÁrea\n\t%.2lf cm²\n", area);

  return;


} //areaCoroacircular

/**
* @brief Esta função calcula a área de um trapézio por meio de três dados que são inseridos pelo usuário : o valor da base maior do trapezio, 
*        o valor da base menor do trapézio e o valor da altura do trapézio. Tais dados são lidos por meio da função leiaDados(5), que além de ler, valida ou invalida 
*        os valores digitados pelo usuário, se cada valor lido for válido o cálculo ((lado_a + lado_b) * altura)/ 2.0 será realizado e impresso logo 
*        em seguida.    
*/
void areaTrapezio(void){ //trapézio
  
  double lado_a = 0.0; //valor do lado_a
  double lado_b = 0.0; //valor do lado_b
  double altura = 0.0; //valor da altura
  double area = 0.0; //valor da área
  
  printf("\t====================\n");
  printf("\t  Área do Trapézio\n");
  printf("\t====================\n");
  
  printf("\nDigite o valor de um dos lados paralelos: ");
  lado_a = leiaDados(5); //ler valor do lado_a
  printf("\nDigite o valor do outro lado paralelo: ");
  lado_b = leiaDados(5); //ler valor do lado_b
  printf("\nDigite o valor da altura: ");
  altura = leiaDados(5); //ler valor da altura
  
  area = ((lado_a + lado_b) * altura) / 2.0; //cálculo da área
  printf("\nÁrea\n\t%.2lf cm²\n", area);

  return;
} //areaTrapezio


/**
* @brief Esta função calcula o volume de um cubo por meio de um dado que é inserido pelo usuário : o valor do lado do cubo.
*        Tal dado é lido por meio da função leiaDados(5), que além de ler,valida ou invalida os valores digitados pelo usuário,
*        se o valor lido for válido o cálculo (lado * lado * lado) será realizado e impresso logo em seguida.    
*/


void volumeCubo(void){ //cubo
  
  double lado = 0.0; //valor do lado
  double volume = 0.0; //valor do volume
  
  printf("\t==================\n");
  printf("\t  Volume do Cubo\n");
  printf("\t==================\n");
  
  printf("\nDigite o valor do lado: ");
  lado = leiaDados(5); //ler valor do lado
  
  volume = (lado * lado * lado); //cálculo do volume
  printf("\nVolume\n\t%.2lf cm³\n", volume);

  return;
} //volumeCubo

/**
* @brief Esta função calcula o volume de um Paralelepípedo por meio de três dados que são inseridos pelo usuário :
*         o valor da largura do paralelepípedo, o valor do comprimento do paralelepípedo e o valor 
*         da altura do paralelepípedo. Tais dados são lidos por meio da função leiaDados(5), que além de ler,  
*         valida ou invalida os valores digitados pelo usuário, se cada valor lido for válido o cálculo (largura * comprimento * altura) será 
*         realizado e impresso logo em seguida.    
*/

void volumeParalelepipedo(void){ //paralelepípedo
  
  double largura = 0.0; //valor da largura
  double comprimento = 0.0; //valor do comprimento
  double altura = 0.0; //valor da altura
  double volume = 0.0; //valor do volume
  
  printf("\t============================\n");
  printf("\t  Volume do Paralelepípedo\n");
  printf("\t============================\n");
  
  printf("\nDigite o valor da largura: ");
  largura = leiaDados(5); //ler valor da largura
  printf("\nDigite o valor do comprimento: ");
  comprimento = leiaDados(5); //ler valor do comprimento
  printf("\nDigite o valor da altura: ");
  altura = leiaDados(5); //ler valor da altura
  
  volume = (largura * comprimento * altura); //cálculo do volume
  printf("\nVolume\n\t%.2lf cm³\n", volume);

  return;
} //volumeParalelepipedo


/**
* @brief Esta função calcula o volume de um Cilindro por meio de dois dados que são inseridos pelo usuário(
*         o valor do raio da base do cilindro e o valor do altura do cilindro) e por meio da constante PI que foi definida no começo do programa.
*         Os dados são lidos por meio da função leiaDados(5), que além de ler, valida ou invalida os valores digitados pelo usuário, 
*         se cada valor lido for válido o cálculo (M_PI * (raaiobase * raiobase)* altura) será realizado e impresso logo em seguida.    
*/

void volumeCilindro(void){ //cilindro
  
  double raiobase = 0.0; //valor do raio da base
  double altura = 0.0; //valor da altura
  double volume = 0.0; //valor do volume
  
  printf("\t======================\n");
  printf("\t  Volume do Cilindro\n");
  printf("\t======================\n");
  
  printf("\nDigite o valor do raio: ");
  raiobase = leiaDados(5); //ler valor do raio
  printf("\nDigite o valor da altura: ");
  altura = leiaDados(5); //ler valor da altura
  
  volume = M_PI * (raiobase * raiobase) * altura; //cálculo do volume
  printf("\nVolume\n\t%.2lf cm³\n", volume);

  return;
} //volumeCilindro

/**
* @brief Esta função calcula o volume de uma esfera por meio de um dado que é inserido pelo usuário(
*         o valor do raio da esfera) e por meio da cosntante PI que foi definida no começo do programa.
*         O dado é lido por meio da função leiaDados(5), que além de ler, valida ou invalida o valor digitado pelo usuário, 
*         se o valor lido for válido o cálculo (4.0 *(M_PI * (raio * raio * raio)))/3.0 será realizado e impresso logo em seguida.    
*/

void volumeEsfera(void){ //esfera
  
  double raio = 0.0; //valor do raio
  double volume = 0.0; //valor do volume
  
  printf("\t====================\n");
  printf("\t  Volume da Esfera\n");
  printf("\t====================\n");
  
  printf("\nDigite o valor do raio: ");
  raio = leiaDados(5); //ler valor do raio
  
  volume = (4.0 * (M_PI * (raio * raio * raio))) / 3.0; //cálculo do volume
  printf("\nVolume\n\t%.2lf cm³\n", volume);

  return;
} //volumeEsfera


/**
* @brief Esta função calcula o volume de um elipsoide por meio de três dados que são inseridos pelo usuário(o valor do semi eixo a, o valor do semi eixo b
*         e o valor do semi eixo c) e por meio da constante PI que foi definida no começo do programa.
*         Os dado são lidos por meio da função leiaDados(5), que além de ler, valida ou invalida o valor digitado pelo usuário, 
*         se cada valor lido for válido o cálculo (4.0 *(M_PI * (semie_a * semie_b * semie_c)))/3.0 será realizado e impresso logo em seguida. */

void volumeElipsoide(void){ //elipsoide
  
  double semie_a = 0.0; //valor do semi-eixo_a
  double semie_b = 0.0; //valor do semi-eixo_b
  double semie_c = 0.0; //valor do semi-eixo_c
  double volume = 0.0; //valor do volume
  
  printf("\t=======================\n");
  printf("\t  Volume do Elipsoide\n");
  printf("\t=======================\n");
  
  printf("\nDigite o valor do primeiro semi-eixo: ");
  semie_a = leiaDados(5); //ler valor do semi-eixo_a
  printf("\nDigite o valor do segundo semi-eixo: ");
  semie_b = leiaDados(5); //ler valor do semi-eixo_b
  printf("\nDigite o valor do terceiro semi-eixo: ");
  semie_c = leiaDados(5); //ler valor do semi-eixo_c
  
  volume = (4 * (M_PI * semie_a * semie_b * semie_c)) / 3.0; //cálculo do volume
  printf("\nVolume\n\t%.2lf cm³\n", volume);

  return;
} //volumeElipsoide
  
/**
* @brief Esta função calcula o volume de uma pirâmide por meio de dois dados que são inseridos pelo usuário : a área da base da pirâmide
*         e a altura da pirâmide.
*         Tais dados são lidos por meio da função leiaDados(5), que além de ler, valida ou invalida o valor digitado pelo usuário, 
*         se cada valor lido for válido o cálculo (areabase * altura)/3.0 será realizado e impresso logo em seguida.    
*/

void volumePiramide(void){ //pirâmide
  
  double areabase = 0.0; //valor da área da base
  double altura = 0.0; //valor da altura
  double volume = 0.0; //valor do volume
  
  printf("\t======================\n");
  printf("\t  Volume da Pirâmide\n");
  printf("\t======================\n");
  
  printf("\nDigite o valor da área da base: ");
  areabase = leiaDados(5); //ler valor da área da base
  printf("\nDigite o valor da altura: ");
  altura = leiaDados(5); //ler valor da altura
  
  volume = (areabase * altura) / 3.0; //cálculo do volume
  printf("\nVolume\n\t%.2lf cm³\n", volume);
  
  return;
} //volumePiramide

   
/**
* @brief Esta função calcula o volume de um cone por meio de dois dados que são inseridos pelo usuário
*         (o valor do raio da base do cone e o valor da altura do cone) e por meio da cosntante PI que foi definida no começo do programa.
*         Os dado são lidos por meio da função leiaDados(5), que além de ler, valida ou invalida o valor digitado pelo usuário, 
*         se o valor lido for válido o cálculo (M_PI * ((raio_base * raio_base) * altura)) será realizado e impresso logo em seguida. */

void volumeCone(void){ //cone
  
  double raiobase = 0.0; //valor do raio da base
  double altura = 0.0; //valor da altura
  double volume = 0.0; //valor do volume
  
  printf("\t==================\n");
  printf("\t  Volume do Cone\n");
  printf("\t==================\n");
  
  printf("\nDigite o valor do raio da base: ");
  raiobase = leiaDados(5); //ler valor do raio da base
  printf("\nDigite o valor da altura: ");
  altura = leiaDados(5); //ler valor da altura
  
  volume = (M_PI * ((raiobase * raiobase) * altura)) / 3.0; //cálculo do volume
  printf("\nVolume\n\t%.2lf cm³\n", volume);
  
  return;
} //volumeCone

/**
* @brief Esta função calcula o volume de um prisma por meio de dois dados que são inseridos pelo usuário : o valor da área da base do prisma 
*         e o valor da altura do prisma,
*         Os dados são lidos por meio da função leiaDados(5), que além de ler, valida ou invalida o valor digitado pelo usuário, 
*         se cada valor lido for válido o cálculo (areabase * altura) será realizado e impresso logo em seguida.    
*/
void volumePrisma(void){ //prisma
  
  double areabase = 0.0; //valor da área da base
  double altura = 0.0; //valor da altura
  double volume = 0.0; //valor do volume
  
  printf("\t====================\n");
  printf("\t  Volume do Prisma\n");
  printf("\t====================\n");
  
  printf("\nDigite o valor da área da base: ");
  areabase = leiaDados(5); //ler valor da área da base
  printf("\nDigite o valor da altura: ");
  altura = leiaDados(5); //ler valor da altura
  
  volume = areabase * altura; //cálculo do volume
  printf("\nVolume\n\t%.2lf cm³\n", volume);
  
  return;
} //volumePrisma

int menu_4(void){ //menu_4
  
  double x = 0.0;
  int o = 0;
  
  printf("\nOpções:\n");
  printf("1 - Repetir cálculo com novos valores\n"); //repetir cálculo com novos valores
  printf("2 - Voltar à seleção de formas\n"); //selecionar nova forma
  
  printf("\nDigite uma opção: ");
  x = leiaDados(4); //ler opção
  o = (int) x;
  
  if(o == 1){ //repetir cálculo com novos valores
    
    return 1;
  }else if(o == 2){ //selecionar nova forma
    
    return 0;
  }else{
  } //else
} //menu_4

int menu_3(void){ //menu_3 | volume
  
  double x = 0.0;
  int o = 0;
  
  system("clear");
  
  printf("\t==================================\n");
  printf("\t  Cálculo dos volumes de sólidos\n");
  printf("\t==================================\n");
  
  printf("\nOpções:\n");
  printf("1 - Cubo\n"); //cubo
  printf("2 - Paralelepípedo\n"); //paralelepípedo
  printf("3 - Cilindro\n"); //cilindro
  printf("4 - Esfera\n"); //esfera
  printf("5 - Elipsoide\n"); //elipsoide
  printf("6 - Pirâmide\n"); //pirâmide
  printf("7 - Cone\n"); //cone
  printf("8 - Prisma\n"); //prisma
  printf("9 - Retornar ao menu anterior\n"); //retornar ao menu anterior
  
  printf("\nDigite uma opção: ");
  x = leiaDados(3);
  o = (int) x;
  
  if(o == 9){ //retornar ao menu anterior
    
    return 1;
  }else if(o == 8){ //prisma
    
    for(o = 1; o == 1;){
      
      volumePrisma();
      o = menu_4();
    } //for
    
    return 3;
  }else if(o == 7){ //cone
    
    for(o = 1; o == 1;){
      
      volumeCone();
      o = menu_4();
    } //for
    
    return 3;
  }else if(o == 6){ //pirâmide
    
    for(o = 1; o == 1;){
      
      volumePiramide();
      o = menu_4();
    } //for
    
    return 3;
  }else if(o == 5){ //elipsoide
    
    for(o = 1; o == 1;){
      
      volumeElipsoide();
      o = menu_4();
    } //for
    
    return 3;
  }else if(o == 4){ //esfera
    
    for(o = 1; o == 1;){
      
      volumeEsfera();
      o = menu_4();
    } //for
    
    return 3;
  }else if(o == 3){ //cilindro
    
    for(o = 1; o == 1;){
      
      volumeCilindro();
      o = menu_4();
    } //for 
    
    return 3;
  }else if(o == 2){ //paralelepípedo
    
    for(o = 1; o == 1;){
      
      volumeParalelepipedo();
      o = menu_4();
    } //for
    
    return 3;
  }else if(o == 1){ //cubo
    
    for(o = 1; o == 1;){
      
      volumeCubo();
      o = menu_4();
    } //for 
    
    return 3;
  }else{
  } //else
} //menu_3 | volume

int menu_2(void){ //menu_2 | área
  
  double x = 0.0;
  int o = 0;
  
  system("clear");
  
  printf("\t=======================================\n");
  printf("\t  Cálculo das áreas de figuras planas\n");
  printf("\t=======================================\n");
  
  printf("\nOpções:\n");
  printf("1 - Triângulo\n");
  printf("2 - Paralelogramo\n");
  printf("3 - Losango\n");
  printf("4 - Quadrado\n");
  printf("5 - Retângulo\n");
  printf("6 - Círculo\n");
  printf("7 - Setor Circular\n");
  printf("8 - Coroa Circular\n");
  printf("9 - Trapézio\n");
  printf("10 - Retornar ao menu anterior\n");
  
  printf("\nDigite uma opção: ");
  x = leiaDados(2);
  o = (int) x;
  
  if(o == 10){ //retornar ao menu anterior
    
    return 1;
  }else if(o == 9){ //trapézio
    
    for(o = 1; o == 1;){
      
      areaTrapezio();
      o = menu_4();
    } //for 
        
    return 2;
  }else if(o == 8){ //coroa circular
    
    for(o = 1; o == 1;){
      
      areaCoroacircular();
      o = menu_4();
    } //for
    
    return 2;
  }else if(o == 7){ //setor circular
    
    for(o = 1; o == 1;){
      
      areaSetorcircular();
      o = menu_4();
    } //for
    
    return 2;
  }else if(o == 6){ //círculo
    
    for(o = 1; o == 1;){
      
      areaCirculo();
      o = menu_4();
    } //for
    
    return 2;
  }else if(o == 5){ //retângulo
    
    for(o = 1; o == 1;){
      
      areaRetangulo();
      o = menu_4();
    } //for
    
    return 2;
  }else if(o == 4){ //quadrado
    
    for(o = 1; o == 1;){
      
      areaQuadrado();
      o = menu_4();
    } //for
    
    return 2;
  }else if(o == 3){ //losango
    
    for(o = 1; o == 1;){
      
      areaLosango();
      o = menu_4();
    } //for 
    
    return 2;
  }else if(o == 2){ //paralelogramo
    
    for(o = 1; o == 1;){
      
      areaParalelogramo();
      o = menu_4();
    } //for 
    
    return 2;
  }else if(o == 1){ //triângulo
    
    for(o = 1; o == 1;){
      
      areaTriangulo();
      o = menu_4();
    } //for
    
    return 2;
  }else{
  } //else
} //menu_2 | área

int menu_1(void){ //menu_!
  
  double x = 0.0;
  int o = 0;
  
  system("clear");
  
  printf("\n\t=============================\n");
  printf("\t  Cálculo de área ou volume\n");
  printf("\t=============================\n");
  printf("\nOpções:\n");
  printf("\n1 - Cálculo da área\n"); //chamar menu_2
  printf("2 - Cálculo de volume\n"); //chamar menu_3
  printf("3 - Sair\n"); //fechar programa
  
  printf("\nDigite uma opção: ");
  x = leiaDados(1);
  o = (int) x;
  
  if(o == 3){ //fechar programa
    
    return 0;
  }else if(o == 2){ //chamar menu_3 | volume
    
    return 3;
  }else if(o == 1){ //chamar menu_2 | área
    
    return 2;
  }else{
  } //else
} //menu_1

void menu(void){ //organização dos menus  
  
  int i = 0;
  
  for(i = 1; i != 0;){
    if(i == 1){ //menu_1
      
      i = menu_1();
    }else if(i == 2){ //menu_2 | área
      
      i = menu_2();
    }else if(i == 3){ //menu_3 | volume
      
      i = menu_3();
    }else{
    } //else
  } //for
  
  system("clear");
  
  return;
} //menu

int main(void){
  
  menu();
  
  return 0;
} //main
