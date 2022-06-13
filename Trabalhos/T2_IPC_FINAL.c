/**
* @file T2_IPC_FINAL.c
* @brief	
*	OBS_1: 
*			Inicialmente o usuário possui 7 escolhas:
*		
*			1 - Ler turma de estudantes do arquivo:
*				Essa funçao lerá uma turma de estudantes de um arquivo com os seguintes dados: nome do aluno, matricula, notas das provas, notas dos trabalhos, quantidade de faltas,
*  			  	e a situação (Aprovado/Reprovado), e a armazenará em um arranjo de estruturas. Se o arquivo não existir, poderá ser criado.
*		    
*			2 - Imprimir turma de estudantes:
*				Essa função imprimirá na tela (no formato de uma tabela) os dados presentes no arranjo de estruturas que foram lidos, inseridos ou editados.   
*
*		    3 - Imprimir estatísticas da turma:
*		    	Essa função imprimirá na tela (no formato de uma tabela) as estatísticas dos dados presentes no arranjo de estruturas que foram lidos, inseridos ou editados.
*
*			4 - Cadastrar novo estudante:
*				Essa função serve para o usuário inserir novos dados no arranjo de estruturas, ou seja, serve para cadastrar um novo estudante.
*			
*			5 - Editar informações de um estudante:
*				Essa função serve para o usuário editar/alterar os dados que estão no arranjo de estruturas.
*			
*			6 - Reler turma de estudantes do arquivo:
*				Essa função serve para que a turma de estudantes seja lida de novo, ou seja, serve para que todos os dados inseridos ou editados no arranjo de estruturas sejam apagados. 
*			
*			7 -Salvar e sair:
*				Essa função serve para que todas as alterações feitas no arrajo de estruturas sejam salvas, ou seja, serve para que os dados sejam escritos no arquivo.  
*			
*	OBS_2: 
*			O programa possui 19 funções no total,
*			tais funções servem para realizar o que é pedido pelas funções principais de forma separada e organizada, algumas funções são sub-menus, 
*			outras realizam cálculos, outras são para leitura de dados, outras são para impressão de dados etc, ou seja, cada função realiza uma tarefa.
*
* @author Euller Henrique Bandeira Oliveira 11821BSI210
* @date 16/12/2018
* @bugs Nenhum conhecido.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* @brief EXPLICAÇÃO: Esta struct armazenará:
*					 1) O nome do aluno, como um vetor de caracteres, ou seja, uma string (pode ter no máximo 50 caracteres).
*		 			 2) A matrícula, como um vetor de caracteres, ou seja, uma string,(pode ter no máximo 11 carateres).
*		             3) As notas das provas, como um vetor de inteiros, ou seja, a nota da P1 é notas_provas[0], a nota da P2 é notas_provas[1], a nota da P3 é nota nota_prova[2]. 
*		             4) As notas dos trabalhos, como um vetor de inteiros, ou seja, a nota do T1 é notas_trabs[0], a nota do T2 é notas_trabs[1].
*		             5) A quantidade de faltas.
*		             6) A situação do aluno (Aprovado/Reprovado).
*
*/

typedef struct 
{
	char nome[51];
	char matricula[12];
	int  notas_provas[3];
	int  notas_trabs[2];
	int  faltas;
	int  notafinal;
	char situacao;
} Estudantes;


/**
* @brief EXPLICAÇÃO: Esta função imprimirá as principais opções disponiveis no programa, ou seja, imprimirá as opções do menu principal, logo após, tal função lerá o valor 
*		 			 da opção digitada pelo usuário e retornará tal valor para a função menu. 
*		 
*		 	  OBS_1: Há um loop na função menu, portanto, depois que a função correspondente ao valor
*		 	         for executada o menu_principal será chamado de novo;
* 
*/

int  menu_principal(){
	int escolha = 0;
	
	printf("=========================================\n");
    printf("             Menu Principal              \n");
    printf("=========================================\n");
    printf("Opções:\n\n");
    printf("1 - Ler turma de estudantes do arquivo\n");
    printf("2 - Imprimir turma de estudantes\n");
    printf("3 - Imprimir estatísticas da turma\n");
    printf("4 - Cadastrar novo estudante\n");
    printf("5 - Editar informacões de um estudante\n");
    printf("6 - Reler turma de estudantes do arquivo\n");
    printf("7 - Salvar e Sair\n\n");
    printf("Digite uma opção: ");

	scanf("%d", &escolha);
	printf("\n");
	getchar();

	while(escolha < 1 || escolha > 7){ 
  	 	 printf("\nOPÇÃO INVÁLIDA!!\nDigite uma opção válida: "); 
    	 scanf("%d", &escolha); 
    	 getchar();
    }

	if(escolha == 1){
		return 1;
	}else 
	if (escolha == 2){
		return 2;
	}else
	if (escolha == 3){
		return 3;
	}else 
	if (escolha == 4){
		return 4;
	}else 
	if (escolha == 5){
		return 5;
	}else 
	if(escolha == 6){
		return 6;
	}else 
	if(escolha == 7){
		return 7;
	}
}

/**
* @brief	       OBS_1: Esta função é chamada pela função ifs_1, ela faz parte da execução da função equivalente a opção 1 digitada pelo usúario no menu principal.
*		 
*			       OBS_2: Há um loop na função ifs_1, ou seja, após a execução da função equivalente a opção digitada pelo usuário, o menu_opcao_1 será chamado novamente. 
*		 
*		 	  EXPLICAÇÃO: Esta função irá imprimir as sub-opções disponiveis na primeira opção do menu_principal, logo após, a função lerá o valor digitado pelo usuário e retornará tal
*		                  valor para a função ifs_1. 
*/

int menu_opcao_1(){
	int escolha2 = 0;

	printf("=========================================\n");
	printf("               Ler Turma                 \n");
    printf("=========================================\n\n");
	printf("Opções:\n\n");
	printf("1 - Ler turma existente\n"); 
	printf("2 - Criar nova turma\n");
	printf("3 - Voltar ao menu principal\n\n");
	printf("Digite uma opção: ");

	scanf("%d", &escolha2);
	printf("\n");
	getchar();

	while(escolha2 < 1 || escolha2 > 3){ 
  	 	 printf("\nOPÇÃO INVÁLIDA!!\nDigite uma opção válida: "); 
    	 scanf("%d", &escolha2);
    	 getchar();
    }

	if(escolha2 == 1){
		return 1;
	}else 
	if (escolha2 == 2){
		return 2;
	}else
	if (escolha2 == 3){
		return 3;
	}
}

/**
* @brief 	   OBS_1: Esta função é chamada pela função ifs_1, ela faz parte da execução da função equivalente a opção 1 digitada pelo usúario na função menu_opcao_1.
*
*			   OBS_2: Há um loop na função ifs_1, ou seja, após a execução da função turma_1, o menu_opcao_1 será chamado novamente. 
*		 
*		 EXPLICAÇÃO: Esta função pedirá para o usuário digitar o nome do arquivo que será lido, se o arquivo não existir uma mensagem dizendo isso será exibida, se existir,
*					 os dados do arquivo serão lidos e armazenados no arranjo de estrutura. Se o arquivo estiver vazio o arrajo de estrutura ficará vazio.
*		 
* @param estudantes[] arranjo de estruturas.
* @param  file_name[] nome do arquivo, se o arquivo for criado ou lido o nome dele será armazenado nessa váriavel por meio da utlização da strcpy, tal função irá copiar o nome lido 
*					  para a váriavel file_name.
*/

void turma_1(Estudantes estudantes[],char file_name[]){
	
	char arq[50];
	FILE *fp;

	printf("Digite o nome do arquivo com a turma : ");
	scanf("%s", arq);
	printf("\n");
	getchar();

	fp = fopen (arq,"r");

	if(fp == NULL){
			printf ("Arquivo %s não existe!\n\n",arq);
	}else
	if(fp != NULL){
	   	for(int i = 0; i < 80 && feof(fp) == 0; i++){

				 // enquanto i for menor que 80 e o arquivo não tiver chegado ao fim, a leitura dos dados do arquivo continuará sendo realizada.
	   			// A função feof serve para identificar o final do arquivo, ou seja, se o arquivo tiver chegado ao fim, a leitura é interrompida.

   			fgets(estudantes[i].nome,sizeof(estudantes[i].nome),fp);
			estudantes[i].nome[strcspn(estudantes[i].nome,"\n")] = 0;
			
				if ((estudantes[i].nome) == NULL) {
					fprintf(stderr,"Erro ao ler a string\n");
					exit(1);
				}

			fgets(estudantes[i].matricula,sizeof(estudantes[i].matricula),fp);
			estudantes[i].matricula[strcspn(estudantes[i].matricula,"\n")] = 0;
							
    				
    			if (estudantes[i].matricula == NULL){
					fprintf(stderr,"Erro ao ler a string\n");
					exit(1);
				}
		
			fscanf(fp,"%d\n",&(estudantes[i].notas_provas[0]));
			fscanf(fp,"%d\n",&(estudantes[i].notas_provas[1]));
			fscanf(fp,"%d\n",&(estudantes[i].notas_provas[2]));

			fscanf(fp,"%d\n", &(estudantes[i].notas_trabs[0]));
			fscanf(fp,"%d\n", &(estudantes[i].notas_trabs[1]));

			fscanf(fp,"%d\n", &(estudantes[i].faltas));
			fscanf(fp,"%d\n", &(estudantes[i].notafinal));
			fscanf(fp,"%c\n", &(estudantes[i].situacao));

		strcpy(file_name,arq);
		}

		printf("Arquivo %s lido com sucesso!\n",arq);
		fclose(fp);
		return;
	}
}

/**
* @brief	  OBS_1: Esta função é chamada pela função ifs_1, ela faz parte da execução da função equivalente a opção 2 digitada pelo usúario na função menu_opcao_1.
*		
*		  	  OBS_2: Há um loop na função ifs_1, ou seja, após a execução da função turma_2, o menu_opcao_1 será chamado novamente. 
*		 
*		 EXPLICAÇÃO: Esta função pedirá para o usuário digitar o nome do arquivo que será lido, se o arquivo não existir um novo será criado, se existir o usuário poderá 
*					 decidir entre sobrescrever o arquivo (apagar conteúdo) ou não.
*		 
* @param estudantes[] arranjo de estruturas. 
* @param  file_name[] nome do arquivo, se o arquivo for criado ou lido o nome dele será armazenado nessa váriavel por meio da utlização da strcpy, tal função irá copiar o nome lido para 
*			          a váriavel file_name.
*/

void turma_2(Estudantes estudantes[],char file_name[]){
	char arq[50];
	FILE *fp;

	printf("Digite o nome do arquivo com a turma : ");
				scanf("%s", arq);
				printf("\n");
				getchar();		
				
				fp = fopen (arq,"r");
		
				if(fp == NULL){
					
					fp = fopen (arq,"w");
					strcpy(file_name,arq);
					printf("Arquivo %s criado com sucesso.\n\n",arq);
					fclose(fp);
				}else
				if(fp != NULL){
					
					char letra;
					printf("Arquivo %s já existe. Deseja sobrescrevê-lo? (S/N): ",arq);
					
					scanf("%c",&letra);
					printf("\n");
					getchar();

					while(letra != 'S' && letra != 's' && letra != 'N' && letra != 'n'){
						
						printf("\nOPÇÃO INVÁLIDA!!");
						printf("\nDigite uma opção válida: ");
    	 				scanf("%c",&letra); 
    	 				getchar();
					}

					if((letra == 'S') || (letra == 's')){
						
						fp = fopen(arq,"w");
						strcpy(file_name,arq);
						printf("Arquivo %s criado com sucesso.\n\n",arq);
						fclose(fp);
						return;
					}

					if(letra == 'N' || letra == 'n'){
						return;
					}
    			}
}

/**
* @brief 	  OBS_1: Esta função é chamada pela função menu, ela é equivalente a opção 1 digitada pelo usúario na função menu_principal.
*		 
*			  OBS_2: Há um loop na função menu, ou seja, após a execução da função ifs_1, o menu_principal será chamado novamente. 
*		 
*		 EXPLICAÇÃO: Esta função executará as funções equivalentes às opções digitadas pelo usuário no menu_opcao_1.
*		 
*		 	  OBS_3: Há um loop nesta função, ou seja, após a execução da opção escohida pelo usuário o menu_opcao_1 será chamado novamente.
*		
*		 	  OBS_4: Se a opção digitada pelo usuário no menu_opcao_1 for 3, a função ifs_1 será encerrada, ou seja, o menu_principal será chamado por causa do loop presente na função menu.
*
* @param estudantes[] arranjo de estruturas 
* @param  file_name[] nome do arquivo, se o arquivo for criado ou lido o nome dele será armazenado nessa váriavel por meio da utlização da strcpy, tal função irá copiar o nome lido 
*					  para a váriavel file_name.
*/

void ifs_1(Estudantes estudantes[],char file_name[]){
	char arq[50];
	FILE *fp;
	
	int turma = 0;
	turma = 1;

	    while(turma != 0){

			turma = menu_opcao_1();
			
			if(turma == 1){			
				turma_1(estudantes,file_name);
        	}
			if(turma == 2){
				turma_2(estudantes,file_name);
		   	}
		   	if(turma == 3){
				return;
			}	
        }
}

/**
* @brief 	  OBS_1: Esta função é chamada pela função menu, ela é equivalente a opção 2 digitada pelo usúario na função menu_principal.
*		
*		  	  OBS_2: Há um loop na função menu, ou seja, após a execução da função ifs_2, o menu_principal será chamado novamente. 
*		 
*		 EXPLICAÇÃO: Esta função irá verificar se há uma turma carregada por meio da tentativa de abertura da file_name (se existir algo na file_name é porque alguma função 
*					 foi lida ou criada),se não houver, uma mensagem dizendo isso será exibida. 
*				     
*					 Se houver, todos os dados presntes no arranjo de estruturas serão impressos como uma tabela na tela.
*		
* @param estudantes[] arranjo de estruturas.  
* @param  file_name[] nome do arquivo, se o arquivo for criado ou lido o nome dele será armazenado nessa váriavel por meio da utlização da strcpy, tal função irá copiar o nome lido 
* 					  para a váriavel file_name.	
*/

void ifs_2(Estudantes estudantes[],char file_name[]){

	FILE *fp;
	fp = fopen(file_name,"r");


	if(fp == NULL){
	printf("Nâo há turma carregada!\n");
	}

	if(fp != NULL){
		 printf("                                         Estudantes                                                         \n");
   		 printf("------------------------------------------------------------------------------------------------------------\n");
   		 printf("Nome                                                 Matrícula     N1   N2   N3   T1   T2   Fal   Final  Sit\n");
   		 printf("------------------------------------------------------------------------------------------------------------\n");
		
		for(int i = 0; i < 80 && estudantes[i].nome[0] != '\0'; i++){
																		
				// enquanto i for menor que 80 e o primeiro caracter do nome for diferente de '\0' um novo estudante[i] será impresso, 
			   // ou seja, se existir um caracter na linha correspondente ao campo nome no arranjo de estruturas significa 
			  // que o arranjo de estruturas não chegou ao fim, portanto,
			 // enquanto o arranjo de estruturas não tiver chegado ao fim um novo estudante[i] será impresso.

   		 printf("%-52s %12s %4d %4d %4d %4d %4d %5d %7d %4c\n",
   		 estudantes[i].nome,estudantes[i].matricula,estudantes[i].notas_provas[0],estudantes[i].notas_provas[1],estudantes[i].notas_provas[2],
   		 estudantes[i].notas_trabs[0],estudantes[i].notas_trabs[1],
   		 estudantes[i].faltas,estudantes[i].notafinal,estudantes[i].situacao);
   		 }
   		 printf("------------------------------------------------------------------------------------------------------------\n");
   		 fclose(fp);
	}
	return;
}

/**
* @brief      OBS_1:  Esta função é chamada pela função ifs_3. 
*		 
*			  OBS_2: Como esta função retorna mais de um valor, é obrigatório o uso de ponteiros, portanto, a função ifs_3 envia os endereços de cada parâmetro para a função calculos_1,
*					 tal função rebece os endereços na declaração dos parâmetros, já que a função possui os endereços de todos os parâmetros, conseguirá alterar os valores de cada um ao
*					 longo da função.
*		 
* 		 EXPLICAÇÃO: Esta função é responsável por calcular as maiores e as menores notas da turma, quando a iteração começa lógicamente as maiores e as menores notas são as primeiras 
*					 que foram inseridas,isto é, as notas do primeiro estudante.
*					 
*					 Já quando a iteração é maior que 0, as notas de cada estudante começam a ser comparadas, a cada iteração os valores se atualizam ou não dependendo da resposta da 
*					 comparação. Quando a quantidade de estudantes for maior que 80 ou quando o arquivo chegar ao fim o cálculo é interrompido.  
*		 
*		
* @param estudantes [] arranjo de estruturas.
* @param   file_name[] nome do arquivo, se o arquivo for criado ou lido o nome dele será armazenado nessa váriavel por meio da utlização da strcpy, tal função irá copiar o nome lido para
*				       a váriavel file_name
*
* @param maior P1 maior nota da turma na P1.
* @param menor P1 menor nota da turma na P1.
* @param maior P2 maior nota da turma na P2.
* @param maior P2 menor nota da turma na P2.
* @param maior P3 maior nota da turma na P3.
* @param maior P3 menor nota da turma na P3.
* @param maior T1 maior nota da turma no T1.
* @param maior T1 menor nota da turma no T1.
* @param maior T2 maior nota da turma no T2.
* @param maior T2 menor nota da turma no T2.
* @param maior NF maior nota da turma na NF.
* @param maior NF menor nota da turma na NF .
* @param i indice do estudante atual.
*/

void calculos_1(Estudantes estudantes[], char file_name[], int* maiorP1,int* menorP1, int* maiorP2, int* menorP2, int* maiorP3, int* menorP3, int* maiorT1, int* menorT1, int* maiorT2,
														   int* menorT2, int* maiorNF, int* menorNF,int i){
				if(i == 0){
					*maiorP1 = estudantes[i].notas_provas[0];
					*menorP1 = estudantes[i].notas_provas[0];
					*maiorP2 = estudantes[i].notas_provas[1];
					*menorP2 = estudantes[i].notas_provas[1];
					*maiorP3 = estudantes[i].notas_provas[2];
					*menorP3 = estudantes[i].notas_provas[2];
					*maiorT1 = estudantes[i].notas_trabs[0];
					*menorT1 = estudantes[i].notas_trabs[0];
					*maiorT2 = estudantes[i].notas_trabs[1];
					*menorT2 = estudantes[i].notas_trabs[1];
					*maiorNF = estudantes[i].notafinal;
					*menorNF = estudantes[i].notafinal;
				}

				if(estudantes[i].notas_provas[0] > *maiorP1){
					*maiorP1 = estudantes[i].notas_provas[0];
				}
				if(estudantes[i].notas_provas[0] < *menorP1){
					*menorP1 = estudantes[i].notas_provas[0];
				}
				if(estudantes[i].notas_provas[1] > *maiorP2){
					*maiorP2 = estudantes[i].notas_provas[1];
				}
				if(estudantes[i].notas_provas[1] < *menorP2){
					*menorP2 = estudantes[i].notas_provas[1];
				}
				if(estudantes[i].notas_provas[2] > *maiorP3){
					*maiorP3 = estudantes[i].notas_provas[2];
				}
				if(estudantes[i].notas_provas[2] < *menorP3){
					*menorP3 = estudantes[i].notas_provas[2];
				}
				if(estudantes[i].notas_trabs[0] > *maiorT1){
					*maiorT1 = estudantes[i].notas_trabs[0];
				}
				if(estudantes[i].notas_trabs[0] < *menorT1){
					*menorT1 = estudantes[i].notas_trabs[0];
				}
				if(estudantes[i].notas_trabs[1] > *maiorT2){
					*maiorT2 = estudantes[i].notas_trabs[1];
				}
				if(estudantes[i].notas_trabs[1] < *menorT2){
					*menorT2 = estudantes[i].notas_trabs[1];
				}
				if(estudantes[i].notafinal >  *maiorNF){
           			*maiorNF = estudantes[i].notafinal;
        		}
        		if(estudantes[i].notafinal < *menorNF){
					*menorNF = estudantes[i].notafinal;
				}
return;
}

/**
* @brief	  OBS_1: Esta função função é chamada pela função ifs_3 logo aṕos a função calculos_1 ser chamada. 
*			
*			  OBS_2: Como esta função retorna mais de um valor, é obrigatório o uso de ponteiros, portanto, a função ifs_3 envia os endereços de cada parâmetro para a função calculos_2,
*		             tal função rebece os endereços na declaração dos parâmetros, já que a função possui os endereços de todos os parâmetros, conseguirá alterar os valores de cada um 
*					 ao longo da função.
*		 
*		 EXPLICAÇÃO: Esta função é responsável por : somar todas as notas da turma (notas da P1, notas da P2, notas da P3, notas do T1, notas do T2 e as notas finais), determinar
*					 a quantidade de alunos que existem na turma, determinar a quantidade de alunos que foram aprovados, determinar a quantidade de alunos que foram reprovados 
*					 e determinar a quantidade de alunos que foram reprovados por falta.
*		
* @param estudantes [] arranjo de estruturas.
* @param   file_name[] nome do arquivo, se o arquivo for criado ou lido o nome dele será armazenado nessa váriavel por meio da utlização da strcpy, tal função irá copiar o nome lido 
*					   para a váriavel file_name.
*			
* @param somaP1 soma das notas da P1 da turma
* @param somaP2 soma das notas da P2 da turma
* @param somaP3 soma das notas da P3 da turma
* @param somaT1 soma das notas da T1 da turma
* @param somaT2 soma das notas da T2 da turma
* @param notaTOTAL soma das notas finais da turma
* @param qtd_alunos quantidade de alunos que a turma possui
* @param qtd_A quantidade de alunos que foram aprovados
* @param qtd_F quantidade de alunos que foram reprovados
* @param qtd_R quantidade de alunoss que foram reprovados por falta
* @param i indice do estudante atual.
*/


void calculos_2(Estudantes estudantes[], char file_name[],double* somaP1, double* somaP2, double* somaP3, double* somaT1, double* somaT2, int* notaTOTAL,
										 int* qtd_alunos,int* qtd_A,int* qtd_R,int* qtd_F,int i){

				*somaP1 = *somaP1 + estudantes[i].notas_provas[0]; 
				*somaP2 = *somaP2 + estudantes[i].notas_provas[1];
				*somaP3 = *somaP3 + estudantes[i].notas_provas[2];

				*somaT1 = *somaT1 + estudantes[i].notas_trabs[0];
				*somaT2 = *somaT2 + estudantes[i].notas_trabs[1];

				*notaTOTAL = *notaTOTAL + estudantes[i].notafinal;

				*qtd_alunos =  *qtd_alunos + 1;

				if(estudantes[i].situacao == 'A'){
					*qtd_A = *qtd_A + 1;
				}else
				if(estudantes[i].situacao == 'F'){
					*qtd_F = *qtd_F + 1;
				}else
				if(estudantes[i].situacao == 'R'){
					*qtd_R = *qtd_R + 1;
				}
return;
}
/**
* @brief OBS_1: Esta função função é chamada pela função ifs_3 logo aṕos a função calculos_2 ser chamada. 
*		
*		 OBS_2: Ao contrário das funções calculos_1 e calculos_2, esta não está dentro de um laço for, o objetivo do laço já foi concluido, os valores necessários para a função
*		    	calculos_3 funcionar já foram encontrados, se tal função fosse colocada dentro do laço for todos os valores seriam alterados.
*		 
*		 OBS_3: Foi preciso definir condições dentro da calculos_3 devido ao seguinte fato : se o arquivo não possuir nenhum dado o laço for não será iniciado, o programa continuará rodando 
*				e a função calculos_3 será executada, entretando é impossível que a calculos_3 seja executada corretamente sem nenhum valor, portanto,
*				se não houvessem condições dentro dessa função ocorreria um erro.
*
*		 OBS_4: Como esta função retorna mais de um valor, é obrigatório o uso de ponteiros, portanto, a função ifs_3 envia os endereços de cada parâmetro para a função calculos_3,
*		 		tal função rebece os endereços na declaração dos parâmetros, já que a função possui os endereços de todos os parâmetros, conseguirá alterar os valores de cada um ao longo da
*				função.
*		 
*		 OBS_5: Se o contador i for 1 significa que há somente um estudante no arranjo de estrutura, então lógicamente as médias serão somente as suas notas. 
*				Se o contador i for maior que 1 signifca que há mais de um estudante no arranjo de estruturas, então é póssivel realizar os cálculos.
* 		
*		 EXPLICAÇÃO: Esta função é responsável por determinar as médias das notas da turma (média da P1, média da P2, média da P3, média do T1, média do T2, média geral) e determinar as
*				     porcentagens de alunos aprovados, alunos reprovados e alunos reprovados por falta.
* 		 
* @param estudantes [] arranjo de estruturas. 
* @param   file_name[] nome do arquivo, se o arquivo for criado ou lido o nome dele será armazenado nessa váriavel por meio da utlização da strcpy, tal função irá copiar o nome lido para 
*					   a váriavel file_name.
*
* @param mediaP1 média das notas da P1 da turma
* @param mediaP2 média das notas da P2 da turma
* @param mediaP3 média das notas da P3 da turma
* @param mediaT1 média das notas do T1 da turma
* @param mediaT2 média das notas do T2 da turma
* @param media média geral da turma
* @param somaP1 soma das notas da P1 da turma
* @param somaP2 soma das notas da P2 da turma
* @param somaP3 soma das notas da P3 da turma
* @param somaT1 soma das notas da T1 da turma
* @param somaT2 soma das notas da T2 da turma
* @param per_A porcetagem de alunos da turma que foram aprovados
* @param per_R porcentagem de alunos da turma que foram reprovados 
* @param per_F porcentagem de alunos da turma que foram reporvados por falta
* @param qtd_alunos quantidade de alunos que a turma possuI
* @param qtd_A quantidade de alunos que foram aprovados
* @param qtd_R quantidade de alunoss que foram reprovados por falta
* @param qtd_F quantidade de alunos que foram reprovados
* @param notaTOTAL soma das notas finais da turma
* @param i indice do estudante atual.
*/

void calculos_3(Estudantes estudantes[],char file_name[],double* mediaP1, double* mediaP2, double* mediaP3, double* mediaT1,double* mediaT2, double* media,
										double* somaP1, double* somaP2, double* somaP3, double* somaT1, double* somaT2,
										double* per_A, double* per_R, double* per_F,int* qtd_alunos,int* qtd_A,int* qtd_R,int* qtd_F,int* notaTOTAL, int i){
		if(i == 1){
			*mediaP1 = *somaP1;
			*mediaP2 = *somaP2;
			
			*mediaT1 = *somaT1;
			*mediaT2 = *somaT2;

			*media = *notaTOTAL;

			*per_A	= *qtd_A * 100;
			*per_R  = *qtd_R * 100;
			*per_F  = *qtd_F * 100; 
		}	

		if(i > 1){		
				*mediaP1 = *somaP1 / (double) *qtd_alunos;
				*mediaP2 = *somaP2 / (double) *qtd_alunos;
				*mediaP3 = *somaP3 / (double) *qtd_alunos;

				*mediaT1 = *somaT1 / (double) *qtd_alunos;
				*mediaT2 = *somaT2 / (double)  *qtd_alunos;

				*media = *notaTOTAL / (double) *qtd_alunos;

				*per_A = *qtd_A * 100 / *qtd_alunos;
				*per_R = *qtd_R * 100 / *qtd_alunos;
				*per_F = *qtd_F * 100 / *qtd_alunos;
		}
return;
}

/**
* @brief 	   OBS_1: Esta função função é chamada pela função menu, ela é equivalente a opção 3 digitada pelo usúario na função menu_principal.
*		 
*			   OBS_2: Há um loop na função menu, ou seja, após a execução da função ifs_3, o menu_principal será chamado novamente. 
*		 
*		  EXPLICAÇÃO: Esta função irá verificar se há uma turma carregada por meio da tentativa de abertura da file_name (se existir algo na file_name é porque alguma função foi lida 
*		     	      ou criada),se não houver, uma mensagem dizendo isso será exibida. 
*		 			
*					  Se houver, as estatísticas da turma serão calculadas e impressas como uma tabela na tela.
*			
*		ESTATÍSTICAS:
*					 As maiores notas da turma : a maior nota da turma na primeira prova, segunda prova, terceira prova, primeiro trabalho, segundo trabalho e a nota final.
*		 		     As menores notas da turma : a menor nota da turma na primeira prova, segunda prova, terceira prova, primeiro trabalho, segundo trabalho e a nota final.
*		
*		        	 Número de estudantes aprovados: a quantidade de alunos aprovados, e a porcentagem de aprovação.
*		 			 Número de estudantes reprovados: a quantidade de alunos reprovados, e a porcentagem de reprovação.
*				     Número de estudantes reprovados por falta: a quantidade de alunos reprovados por falta, e a porcentagem de reprovaaçao por falta.
*		
* @param estudantes[] arranjo de estruturas. 
* @param  file_name[] nome do arquivo, se o arquivo for criado ou lido o nome dele será armazenado nessa váriavel por meio da utlização da strcpy, tal função irá copiar o nome lido 
*					  para a váriavel file_name.
*/


void ifs_3(Estudantes estudantes[], char file_name[]){
	
	int maiorP1 = 0;int menorP1 = 0;int maiorP2 = 0;int menorP2 = 0;int maiorP3 = 0;int menorP3 = 0;int maiorT1 = 0;int menorT1 = 0;int maiorT2 = 0;int menorT2 = 0;

	int maiorNF = 0;int menorNF = 0;int notaTOTAL = 0;

	double somaP1 = 0; double somaP2 = 0; double somaP3 = 0; double somaT1; double somaT2;
	
	double media = 0;double mediaP1 = 0;double mediaP2 = 0;double mediaP3 = 0;double mediaT1 = 0;double mediaT2 = 0;
	
	int qtd_alunos = 0;int qtd_A = 0;int qtd_R = 0;int qtd_F = 0;
	
	double per_A = 0;double per_F = 0;double per_R = 0;

	FILE *fp;

	fp = fopen(file_name,"r");
	
	if(fp == NULL){
		printf("Não há turma carregada!\n");
	}
	if(fp != NULL){
			
			int i = 0;

			for(i = 0; i < 80 && estudantes[i].nome[0] != '\0' ; i++){ 
				
				// enquanto i for menor que 80 e o primeiro caracter do nome for diferente de '\0' uma novo estudante[i] será usado para realizar os cálculos. 
			   // Ou seja, se existir um caracter na linha correspondente ao campo nome no arranjo de estruturas significa o arranjo de estruturas 
			  // não chegou ao fim, portanto, o arranjo de estruturas não tiver chegado ao fim um novo estudante[i] será usado para realizar os cálculos. 
				
				estudantes[i].notafinal = estudantes[i].notas_provas[0] + estudantes[i].notas_provas[1] + estudantes[i].notas_provas[2] + estudantes[i].notas_trabs[0] 
										  + estudantes[i].notas_trabs[1];
				
				calculos_1(estudantes,file_name,&maiorP1,&menorP1,&maiorP2,&menorP2,&maiorP3,&menorP3,&maiorT1,&menorT1,&maiorT2,&menorT2,&maiorNF,&menorNF,i);
				calculos_2(estudantes,file_name,&somaP1,&somaP2,&somaP3,&somaT1,&somaT2,&notaTOTAL,&qtd_alunos,&qtd_A,&qtd_R,&qtd_F,i);
			}
				calculos_3(estudantes,file_name,&mediaP1,&mediaP2,&mediaP3,&mediaT1,&mediaT2,&media,&somaP1,&somaP2,&somaP3,&somaT1,&somaT2,
							&per_A,&per_R,&per_F,&qtd_alunos,&qtd_A,&qtd_R,&qtd_F,&notaTOTAL,i);
		
            printf("                        Estatísticas                      \n");
			printf("----------------------------------------------------------\n");
			printf("                            N1   N2   N3   T1   T2   Final\n");
			printf("----------------------------------------------------------\n");
            printf("Maiores notas da turma      %2d   %2d   %2d   %2d   %2d     %3d\n",maiorP1,maiorP2,maiorP3,maiorT1,maiorT2,maiorNF);
       		printf("Menores notas da turma      %2d   %2d   %2d   %2d   %2d     %3d\n",menorP1,menorP2,menorP3,menorT1,menorT2,menorNF);
       		printf("Notas medias da turma     %4.1lf %4.1lf %4.1lf %4.1lf %4.1lf   %5.1lf\n",mediaP1,mediaP2,mediaP3,mediaT1,mediaT2,media);
			printf("----------------------------------------------------------\n\n");
			printf("Número de estudantes aprovados:             %2d (%5.1lf %%) \n",qtd_A,per_A);
			printf("Número de estudantes reprovados:            %2d (%5.1lf %%) \n",qtd_R,per_R);
			printf("Número de estudantes reprovados por falta:  %2d (%5.1lf %%) \n",qtd_F,per_F);
			printf("----------------------------------------------------------\n\n");
			fclose(fp);
			}
	return;
}



/**
* @brief 	    OBS_1: Esta função é chamada pela função menu, ela é equivalente a opção 4 digitada pelo usúario na função menu_principal.
*		
*		 	    OBS_2: Há um loop na função menu, ou seja, após a execução da função ifs_4, o menu_principal será chamado novamente. 
*		 
*		 EXPLICAÇÃO_1: Esta função irá verificar se há uma turma carregada por meio da tentativa de abertura da file_name (se existir algo na file_name é porque alguma função 
*					   foi lida ou criada),se não houver, uma mensagem dizendo isso será exibida. 
*				       
*					   Se houver, um laço for varrera todo o arranjo de estruturas em busca do fim do arranjo de estrururas , o laço for irá se encerrar se o contador 
*					   i for maior que 80 ou se o final do arranjo de estrutura for identificado. Logo após, fora do laço for, o programa testará uma condição
*					   baseando-se no valor de i encontrado no laço for, se i for menor que 80  um novo estudante poderá ser cadastrado exatamente no ponto onde do arranjo de estrutura 
*					   foi identificado. Se i for maior que 79 signfica que o arquivo ou o arranjo de estruturas está cheio, então uma mensagem dizendo isso
*					   será exibida.  
*
*		     CADASTRO: Se i for menor que 80 a função irá printar uma ordem ao usuário relativa ao dado que deverá ser lido, e lê-lo logo em seguida. A função irá fazer isso até todos os
*	                   dados serem lidos, ou seja, atá o nome, a matricula, as notas das três provas, as notas dos dois trabalhos e a quantidade de faltas serem lidos.
*					   O usuário não poderá digitar somente dois campos da estrutura Estudantes, a nota final e a situação, tais campos serão calculados no final desta função e inseridos 
*                      no arrajo de estruturas.
*
* @param estudantes[] arranjo de estruturas.  
* @param  file_name[] nome do arquivo, se o arquivo for criado ou lido o nome dele será armazenado nessa váriavel por meio da utlização da strcpy, tal função irá copiar o nome lido 
* 					  para a váriavel file_name.
* @param i indice do estudante atual.	
*/

void ifs_4(Estudantes estudantes[], char file_name[]){
	FILE *fp;
	fp = fopen(file_name,"r");
	
	if(fp == NULL){
		printf("Não há turma carregada!\n");
	}
	if(fp != NULL){
		int i = 0;

		for(i= 0; i < 80 && estudantes[i].nome[0] != '\0'; i++){
		}
			if(i < 80){
				printf("=========================================\n");
				printf("          Cadastrar Novo Estudante       \n");
				printf("=========================================\n\n");

				printf("Digite o nome: ");
				
				fgets(estudantes[i].nome,sizeof(estudantes[i].nome),stdin);
				estudantes[i].nome[strcspn(estudantes[i].nome,"\n")] = 0;
				
				if ((estudantes[i].nome) == NULL) {
					fprintf(stderr,"Erro ao ler a string\n");
					exit(1);
				}

				printf("Digite a matrícula: ");

				fgets(estudantes[i].matricula,sizeof(estudantes[i].matricula),stdin);
				estudantes[i].matricula[strcspn(estudantes[i].matricula,"\n")] = 0;

				if ((estudantes[i].matricula) == NULL) {
					fprintf(stderr,"Erro ao ler a string\n");
					exit(1);
				}

				printf("Digite as três notas das provas: ");
				scanf("%d %d %d",&estudantes[i].notas_provas[0],&estudantes[i].notas_provas[1],&estudantes[i].notas_provas[2]);
				getchar();

				printf("Digite as duas notas dos trabalhos: ");
				scanf("%d %d",&estudantes[i].notas_trabs[0],&estudantes[i].notas_trabs[1]);
				getchar();

				printf("Digite o número de faltas: ");
				scanf("%d",&estudantes[i].faltas);
				printf("\n");
				getchar();

				estudantes[i].notafinal = estudantes[i].notas_provas[0] + estudantes[i].notas_provas[1] + estudantes[i].notas_provas[2] + estudantes[i].notas_trabs[0] 
										   + estudantes[i].notas_trabs[1];

				printf("Nota final: %d\n",estudantes[i].notafinal);
				if(estudantes[i].faltas <= 18 && estudantes[i].notafinal >= 60){
					estudantes[i].situacao = 'A';
					printf("Situação final: Aprovado\n\n");
				}else
				if(estudantes[i].faltas > 18){
					estudantes[i].situacao = 'F';
					printf("Situação final: Reprovado por falta\n\n");
				}else{
				estudantes[i].situacao = 'R';
				printf("Situação final: Reprovado\n\n");
				fclose(fp);
			}
		}else{
		printf("Impossivel cadastrar. Arquivo cheio\n\n");
		}
	}
return;		
}

/**
* @brief 	  OBS_1: Esta função é chamada pela função ifs_5, ela faz parte da execução da função equivalente a opção 5 digitada pelo usúario no menu principal.
*		  
*		  	  OBS_2: Há um loop na função ifS_5, ou seja, após a execução da função equivalente a opção digitada pelo usuário, o menu_opcao_2 será chamado novamente. 
*		 
*		 EXPLICAÇÃO: Esta função irá verificar se há uma turma carregada por meio da tentativa de abertura da file_name (se existir algo na file_name é porque alguma função 
*					 foi lida ou criada),se não houver, uma mensagem dizendo isso será exibida. 
*				      
*					 Se houver, a função irá imprimir as sub-opções disponiveis na quinta opção do menu_principal, logo após, a função lerá o valor digitado pelo usuário e retornará tal
*		 			 valor para a função ifs_5. 
*
* @param estudantes[] arranjo de estruturas  
* @param  file_name[] nome do arquivo, se o arquivo for criado ou lido o nome dele será armazenado nessa váriavel por meio da utlização da strcpy, tal função irá copiar o nome lido 
* 					  para a váriavel file_name.
*/


int menu_opcao_2(Estudantes estudantes[], char file_name[]){
	FILE *fp;
	fp = fopen(file_name,"r");
	
	if(fp == NULL){
		printf("Não há turma carregada!\n");
	}
	if(fp != NULL){
		int escolha3 = 0;

		printf("========================================\n");
		printf("    Editar Informações do Estudante     \n");
		printf("========================================\n\n");
		printf("Opções:                                 \n\n");
		printf("1 - Selecionar por número de matrı́cula\n");
		printf("2 - Selecionar por nome\n");
        printf("3 - Voltar ao menu principal\n\n");
        printf("Digite uma opção: ");


        scanf("%d",&escolha3);
        printf("\n");
        getchar();

        while(escolha3 < 1 || escolha3 > 3){
  	 	 printf("\nOPÇÃO INVÁLIDA!!\nDigite uma opção válida: "); 
    	 scanf("%d", &escolha3); 
    	 getchar();
    	}
 
    	if(escolha3 == 1){
    	 	return 1;
    	}
        if(escolha3 == 2){
        	return 2;
        }
        if(escolha3 == 3){
        	return 3;
        }    
	}
}

/**
* @brief	  OBS_1: Esta função é chamada pela função ifs_5, ela faz parte da execução da função equivalente a opção 1 digitada pelo usúario no menu_opcao_2.
*		 
*			  OBS_2: Há um loop na função ifS_5, ou seja, após a execução da função equivalente a opção digitada pelo usuário, o menu_opcao_2 será chamado novamente. 
*		 
*		 EXPLICAÇÃO: Esta função irá pedir para o usuário digitar o número da matrícula do estudante que terá seus dados editados, logo após, a função irá varrer todo o arranjo de
*					 estruturas em busca de uma correspondência, se a matrícula digitada estiver registrada no arranjo de estruturas um loop será iniciado 
*					 (toda vez que o usuário fizer uma alteração o menu com as opções de edição será chamado novamente) e um menu com as opções de edição será printado na tela, logo após,
*					 a função irá ler a opção escolhida pelo usuário e irá executar a sua correspondência logo em seguida. 
*					 
*		             Se a função não tiver encontrado nenhuma correspodência entre a matŕicula digitada e o arranjo de estrutura uma mensagem dizendo que o número de matricula é 
*					 invalido será printada. 
*					 
*		  	  OBS_3: Após o usuário realizar as edições desejadas a nota final e a situação serão atualizadas.
*		     
*			  OBS_4: Se o usuário escolher a opção 9 a função irá se encerrar, ou seja, o menu_opcao_2 será chamado por causa do loop na função ifs_5.
*
* @param estudantes[] arranjo de estruturas  
* @param  file_name[] nome do arquivo, se o arquivo for criado ou lido o nome dele será armazenado nessa váriavel por meio da utlização da strcpy, tal função irá copiar o nome lido 
* 					  para a váriavel file_name.
*/ 

void menu_opcao_3(Estudantes estudantes[],char file_name[]){
	
	char matricula[12];
    int i = 0;
    int escolha4 = 0;
   
    int loop = 0;
    loop = 1; 
  
        	printf("Digite o número de matrı́cula: ");
        	
        	fgets(matricula,sizeof(matricula),stdin);
			matricula[strcspn(matricula,"\n")] = 0;
        	
        	printf("\n");
	
        		for(i = 0; i < 80; i++){

					if(strcmp(matricula,estudantes[i].matricula) == 0){
    				
    					while(loop != 0){
							
							printf("=========================================\n");
		        			printf("     Editar Informações do Estudante     \n");
		        			printf("=========================================\n");
		        			printf("Opções:\n\n");
		        			printf("1 - Alterar nome\n"); 
		        			printf("2 - Alterar matrícula\n");
		        			printf("3 - Alterar nota da prova 1\n");
		        			printf("4 - Alterar nota da prova 2\n");
		        			printf("5 - Alterar nota da prova 3\n");
		        			printf("6 - Alterar nota do trabalho 1\n");
		        			printf("7 - Alterar nota do trabalho 2\n");
		        			printf("8 - Alterar número de faltas\n");
		        			printf("9 - Voltar ao menu anterior\n\n");
		        			printf("Digite uma opção: ");

		        			scanf("%d",&escolha4);
		        			printf("\n");
		        			getchar();

					        while(escolha4 < 1 || escolha4 > 9){
		  	 	 				printf("\nOPÇÃO INVÁLIDA!!\nDigite uma opção válida: "); 
		    	 				scanf("%d", &escolha4); 
		    	 				getchar();
							}

							if(escolha4 == 1){	
								printf("Digite o nome: ");
							
								fgets(estudantes[i].nome,sizeof(estudantes[i].nome),stdin);
								estudantes[i].nome[strcspn(estudantes[i].nome,"\n")] = 0;
								
								if ((estudantes[i].nome) == NULL) {
								fprintf(stderr,"Erro ao ler a string\n");
								exit(1);
								}
							}
							if(escolha4 == 2){
								printf("Digite a matrícula: ");
								
								fgets(estudantes[i].matricula,sizeof(estudantes[i].matricula),stdin);
								estudantes[i].matricula[strcspn(estudantes[i].matricula,"\n")] = 0;
								
								if ((estudantes[i].matricula) == NULL) {
								fprintf(stderr,"Erro ao ler a string\n");
								exit(1);
								}
							}
							if(escolha4 == 3){
								printf("Digite a nota das prova 1: ");
								scanf("%d",&estudantes[i].notas_provas[0]);
								getchar();
							}
							if(escolha4 == 4){
								printf("Digite a nota da prova 2: ");
								scanf("%d",&estudantes[i].notas_provas[1]);
								getchar();
							}
							if(escolha4 == 5){
								printf("Digite a nota da prova 3: ");
								scanf("%d",&estudantes[i].notas_provas[2]);
								getchar();
							}
							if(escolha4 == 6){
								printf("Digite a nota dos trabalho 1: ");
								scanf("%d",&estudantes[i].notas_trabs[0]);
								getchar();

							}
							if(escolha4 == 7){
								printf("Digite a nota do trabalho 2: ");
								scanf("%d",&estudantes[i].notas_trabs[1]);
								getchar();
							}
							if(escolha4 == 8){
								printf("Digite o número de faltas: ");
								scanf("%d",&estudantes[i].faltas);
								getchar();
							}
							
							estudantes[i].notafinal = estudantes[i].notas_provas[0] + estudantes[i].notas_provas[1] + estudantes[i].notas_provas[2] + estudantes[i].notas_trabs[0] 
											          + estudantes[i].notas_trabs[1];
	   		 
	   		   	           if(estudantes[i].faltas <= 18 && estudantes[i].notafinal >= 60){
			        	   	  estudantes[i].situacao = 'A';
			     	       }else
				           if(estudantes[i].faltas > 18){
					          estudantes[i].situacao = 'F';
				           }else{
				              estudantes[i].situacao = 'R';
				           }
							
						   if(escolha4 == 9){
								return;
							}
							printf("\n");		
					}
				}
					if(strcmp(matricula,estudantes[i].matricula) != 0){
						if(i == 79){
							printf("\nNúmero de matrı́cula inválido!\n\n");
							return;
						}
					}
				}			
return;
}

/**
* @brief 	  OBS_1: Esta função é chamada pela função ifs_5, ela faz parte da execução da função equivalente a opção 2 digitada pelo usúario no menu_opcao_2.
*		 
*			  OBS_2: Há um loop na função ifS_5, ou seja, após a execução da função equivalente à opção digitada pelo usuário, o menu_opcao_2 será chamado novamente. 
*		 
*		 EXPLICAÇÃO: Esta função irá pedir para o usuário digitar o nome do estudante que terá seus dados editados, logo após, a função irá varrer todo o arranjo de
*					 estruturas em busca de uma correspondência, se o nome digitado estiver registrado no arranjo de estruturas um loop será iniciado 
*					 (toda vez que o usuário fizer uma alteração o menu com as opções de edição será chamado novamente) e um menu com as opções de edição será printado na tela,
*					 logo após, a função irá ler a opção escolhida pelo usuário e irá executar a sua correspondência logo em seguida. 
*					 
*				     Se a função não tiver encontrado nenhuma correspondência entre o nome digitado e o arranjo de estruturas uma mensagem dizendo que o nome do estudante
*					 é invalido será printada. 
*					
*			  OBS_3: Após o usuário realizar as edições desejadas a nota final e a situação serão atualizadas.
*		      
*			  OBS_4: Se o usuário escolher a opção 9 a função irá se encerrar, ou seja, o menu_opcao_2 será chamado por causa do loop na função ifs_5.
*
* @param estudantes[] arranjo de estruturas.  
* @param  file_name[] nome do arquivo, se o arquivo for criado ou lido o nome dele será armazenado nessa váriavel por meio da utlização da strcpy, tal função irá copiar o nome lido 
* 					  para a váriavel file_name.
*/

void menu_opcao_4(Estudantes estudantes[],char file_name[]){
	
	char nome[51];
	int i = 0;
    int escolha4 = 0;
    int loop = 0;
    loop = 1;
 	
 			printf("Digite o nome do estudante: ");
        	
        	fgets(nome,sizeof(nome),stdin);
			nome[strcspn(nome,"\n")] = 0;
							
			if (nome == NULL) {
				fprintf(stderr,"Erro ao ler a string\n");
				exit(1);
			}			
        		
        	for(i = 0; i < 80; i++){

					if(strcmp(nome,estudantes[i].nome) == 0){

    					while(loop != 0){

						printf("=========================================\n");
	        			printf("     Editar Informações do Estudante     \n");
	        			printf("=========================================\n");
	        			printf("Opções:\n\n");
	        			printf("1 - Alterar nome\n"); 
	        			printf("2 - Alterar matrícula\n");
	        			printf("3 - Alterar nota da prova 1\n");
	        			printf("4 - Alterar nota da prova 2\n");
	        			printf("5 - Alterar nota da prova 3\n");
	        			printf("6 - Alterar nota do trabalho 1\n");
	        			printf("7 - Alterar nota do trabalho 2\n");
	        			printf("8 - Alterar número de faltas\n");
	        			printf("9 - Voltar ao menu anterior\n\n");
	        			printf("Digite uma opção: ");

	        			scanf("%d",&escolha4);
	        			printf("\n");
	        			getchar();

				        while(escolha4 < 1 || escolha4 > 9){
	  	 	 				printf("\nOPÇÃO INVÁLIDA!!\nDigite uma opção válida: "); 
	    	 				scanf("%d", &escolha4); 
	    	 				getchar();
						}
						if(escolha4 == 1){	
							printf("Digite o nome: ");
							
							fgets(estudantes[i].nome,sizeof(estudantes[i].nome),stdin);
							estudantes[i].nome[strcspn(estudantes[i].nome,"\n")] = 0;
							
							if ((estudantes[i].nome) == NULL) {
							fprintf(stderr,"Erro ao ler a string\n");
							exit(1);
							}
						}
						if(escolha4 == 2){
							printf("Digite a matrícula: ");

							fgets(estudantes[i].matricula,sizeof(estudantes[i].matricula),stdin);
							estudantes[i].matricula[strcspn(estudantes[i].matricula,"\n")] = 0;
							
							if ((estudantes[i].matricula) == NULL) {
							fprintf(stderr,"Erro ao ler a string\n");
							exit(1);
							}
						}
						if(escolha4 == 3){
							printf("Digite a nota das prova 1: ");
							scanf("%d",&estudantes[i].notas_provas[0]);
							getchar();
						}
						if(escolha4 == 4){
							printf("Digite a nota da prova 2: ");
							scanf("%d",&estudantes[i].notas_provas[1]);
							getchar();
						}
						if(escolha4 == 5){
							printf("Digite a nota da prova 3: ");
							scanf("%d",&estudantes[i].notas_provas[2]);
							getchar();
						}
						if(escolha4 == 6){
							printf("Digite a nota dos trabalho 1: ");
							scanf("%d",&estudantes[i].notas_trabs[0]);
							getchar();

						}
						if(escolha4 == 7){
							printf("Digite a nota do trabalho 2: ");
							scanf("%d",&estudantes[i].notas_trabs[1]);
							getchar();
						}
						if(escolha4 == 8){
							printf("Digite o número de faltas: ");
							scanf("%d",&estudantes[i].faltas);
							getchar();
						}

						estudantes[i].notafinal = estudantes[i].notas_provas[0] + estudantes[i].notas_provas[1] + estudantes[i].notas_provas[2] + estudantes[i].notas_trabs[0] + estudantes[i].notas_trabs[1];
   		 
   		 				if(estudantes[i].faltas <= 18 && estudantes[i].notafinal >= 60){
							estudantes[i].situacao = 'A';
						}else
						if(estudantes[i].faltas > 18){
							estudantes[i].situacao = 'F';
						}else{
							estudantes[i].situacao = 'R';
						}	
						if(escolha4 == 9){
							return;
						}		
						printf("\n");
					}
				}
					if(strcmp(nome,estudantes[i].nome) != 0){
						if(i == 79){
							printf("\nNome do aluno inválido!\n\n");
							return;
						}
					}
				}		
return;
}

/**
* @brief 	  OBS_1: Esta função é chamada pela função menu, ela é equivalente a opção 5 digitada pelo usúario na função menu_principal.
*		 
*		  	  OBS_2: Há um loop na função menu, ou seja, após a execução da função ifs_5, o menu_principal será chamado novamente. 
*		 
*		 EXPLICAÇÃO: Esta função irá verificar se há uma turma carregada por meio da tentativa de abertura da file_name (se existir algo na file_name é porque alguma função 
*					 foi lida ou criada),se não houver, uma mensagem dizendo isso será exibida. 
*					 
*					 Se houver, esta função executará as funções equivalentes as opções digitadas pelo usuário no menu_opcao_2.
*		 
*		 	  OBS_3: Há um loop nesta função, ou seja, após a execução da opção escolhida pelo usuário o menu_opcao_2 será chamado novamente.
*		
*		 	  OBS_4: Se a opção digitada pelo usuário no menu_opcao_2 for 3, a função ifs_5 será encerrada, ou seja, o menu_principal será chamado por causa do loop presente na função menu.
*
* @param estudantes[] arranjo de estruturas. 
* @param  file_name[] nome do arquivo, se o arquivo for criado ou lido o nome dele será armazenado nessa váriavel por meio da utlização da strcpy, tal função irá copiar o nome lido 
*					  para a váriavel file_name.
*/


void ifs_5(Estudantes estudantes[], char file_name[]){
	
	FILE *fp;
	fp = fopen(file_name,"r");
	
	if(fp == NULL){
		printf("Não há turma carregada!\n");
	}
	if(fp != NULL){

		int escolha4 = 0;
		escolha4 = 1;

		while(escolha4 != 0){

				escolha4 = menu_opcao_2(estudantes,file_name);

					if(escolha4 == 1){
						menu_opcao_3(estudantes,file_name);
					}
					if(escolha4 == 2){
						menu_opcao_4(estudantes,file_name);
					}
					if(escolha4 == 3){
						return;
					}
		}
		fclose(fp);
	}

}

/**
* @brief 	 OBS_1: Esta função é chamada pela função menu, ela é equivalente a opção 6 digitada pelo usúario na função menu_principal.
*		 
*		 	 OBS_2: Há um loop na função menu, ou seja, após a execução da função ifs_6, o menu_principal será chamado novamente. 
*		 
*		EXPLICAÇÃO: Esta função irá verificar se há uma turma carregada por meio da tentativa de abertura da file_name (se existir algo na file_name é porque alguma função 
*					foi lida ou criada),se não houver, uma mensagem dizendo isso será exibida. 
*				      
*					Se houver, um laço for irá zerar todo o arranjo de estruturas, logo após, outro laço for irá ler os dados do arquivo novamente e os inserirá no 
*					arranjo de estruturas. Esta função basicamente apaga todas as alterações que o usuário fez no arrajo de estruturas, ou seja, está função relê os dados orginais do
*					arquivo.
*		 
* @param estudantes[] arranjo de estrutura 
* @param  file_name[] nome do arquivo, se o arquivo for criado ou lido o nome dele será armazenado nessa váriavel por meio da utlização da strcpy, tal função irá copiar o nome lido 
*					  para a váriavel file_name.
*/

void ifs_6(Estudantes estudantes[], char file_name[]){
	FILE *fp;

	fp = fopen(file_name,"r");

			if(fp == NULL){
			printf ("Não há turma carregada!\n");
			}
			if(fp != NULL){
	   			
	   			for(int i = 0; i < 80; i++){
			 		strcpy(estudantes[i].nome,"");
		 			strcpy(estudantes[i].matricula, "");
		 			estudantes[i].notas_provas[0] = 0;
		 			estudantes[i].notas_provas[1] = 0;
		 			estudantes[i].notas_provas[2] = 0;
   		 			estudantes[i].notas_trabs[0] = 0;
   		 			estudantes[i].notas_trabs[1] = 0;
   		 			estudantes[i].faltas = 0;
   		 			estudantes[i].notafinal = 0;
   		 			estudantes[i].situacao = '\0';
				}

	   			for(int i = 0; i < 80 && feof(fp) == 0; i++){

			  	 // enquanto i for menor que 80 e o arquivo não tiver chegado ao fim, a leitura dos dados do arquivo continuará sendo realizada.
	   			// A função feof serve para identificar o final do arquivo, ou seja, se o arquivo tiver chegado ao fim, a leitura é interrompida.
	   				
	   				fgets(estudantes[i].nome,sizeof(estudantes[i].nome),fp);
					estudantes[i].nome[strcspn(estudantes[i].nome,"\n")] = 0;
			
						if ((estudantes[i].nome) == NULL) {
							fprintf(stderr,"Erro ao ler a string\n");
							exit(1);
						}
					
					fgets(estudantes[i].matricula,sizeof(estudantes[i].matricula),fp);
					estudantes[i].matricula[strcspn(estudantes[i].matricula,"\n")] = 0;
    				
    					if (estudantes[i].matricula == NULL){
							fprintf(stderr,"Erro ao ler a string\n");
							exit(1);
						}
		
					fscanf(fp,"%d\n",&(estudantes[i].notas_provas[0]));
					fscanf(fp,"%d\n",&(estudantes[i].notas_provas[1]));
					fscanf(fp,"%d\n",&(estudantes[i].notas_provas[2]));
					fscanf(fp,"%d\n", &(estudantes[i].notas_trabs[0]));
					fscanf(fp,"%d\n", &(estudantes[i].notas_trabs[1]));
					fscanf(fp,"%d\n", &(estudantes[i].faltas));
					fscanf(fp,"%d\n", &(estudantes[i].notafinal));
					fscanf(fp,"%c\n", &(estudantes[i].situacao));
				}
				printf("Arquivo %s lido com sucesso!\n",file_name);
				fclose(fp);
	   }
return;
}

/**
* @brief 	  OBS_1: Esta função é chamada pela função menu, ela é equivalente a opção 7 digitada pelo usuário na função menu_principal.
*		 
*		 	  OBS_2: Há um loop na função menu, ou seja, após a execução da função ifs_7, o menu_principal será chamado novamente. 
*		 
*		 EXPLICAÇÃO: Esta função irá verificar se há uma turma carregada por meio da tentativa de abertura da file_name (se existir algo na file_name é porque alguma função 
*					 foi lida ou criada).
*					 
*					 Se não houver, a função dará duas opções ao usuário, criar um novo arquivo ou não,
*					 se o o arquivo já existir (existe mas não foi carregado) a função daŕa duas opções ao usuário, sobreescever o arquivo (apagar o conteúdo) ou não fazer nada.
*				     
*					 Se houver, a função dará duas opções ao usuário, apagar o conteúdo do arquivo existente e inserir os dados do arranjo de estruturas nele, ou seja,
*					 salvar as alterações realizadas no arrajo de estruturas no arquivo (printar/escrever os dados do arranjo de estruturas no arquivo) ou não fazer nada, ou seja, 
*					 não salvar.
*		 
* @param estudantes[] arranjo de estruturas. 
* @param  file_name[] nome do arquivo, se o arquivo for criado ou lido o nome dele será armazenado nessa váriavel por meio da utlização da strcpy, tal função irá copiar o nome lido 
*					  para a váriavel file_name.
*/

void ifs_7(Estudantes estudantes[], char file_name[]){
	FILE *fp;
	
	fp = fopen(file_name,"r");

	if(fp == NULL){
		
		char letra;

		printf("Não há arquivo carregado. Deseja criar um novo? (S/N): ");
		
		scanf("%c",&letra);
		printf("\n");
		getchar();

		while(letra != 'S' && letra != 's' && letra != 'N' && letra != 'n'){			
			printf("\nOPÇÃO INVÁLIDA!!");
			printf("\nDigite uma opção válida: ");
    	 	scanf("%c",&letra); 
    	 	getchar();
		}
		
		if((letra == 'S') || (letra == 's')){	
			printf("Digite o nome do arquivo: ");
			
			scanf("%s", file_name);
			printf("\n");
			getchar();

			fp = fopen(file_name,"r");

			char letra2;

			if(fp == NULL){
				fp = fopen(file_name,"w");
				fclose(fp);
				printf("Até a próxima\n");
				exit(1);
			}
					
			if(fp != NULL){
				printf("Arquivo %s já existe. Deseja sobrescrevê-lo?(S/N): ",file_name);
				
				scanf("%c",&letra2);
				printf("\n");
				getchar();

				while(letra2 != 'S' && letra2 != 's' && letra2 != 'N' && letra2 != 'n'){
						printf("\nOPÇÃO INVÁLIDA!!");
						printf("\nDigite uma opção válida: ");
	    	 			scanf("%c",&letra); 
	    	 			getchar();
				}			
					
				if((letra2 == 'S') || (letra2 == 's')){
				
					fp = fopen(file_name,"w");
						
					fclose(fp);
					printf("Até a próxima\n");
					exit(1);
				}
					
				if(letra2 == 'N' || letra2 == 'n'){
					fclose(fp);
					printf("Até a próxima\n");
					exit(1);
				}	
			
			}
		}
		    
		if(letra == 'N' || letra == 'n'){
			printf("Até a próxima\n");
			exit(1);
		}
    }else
	if(fp != NULL){	
		
		char letra3;

		printf("Arquivo %s já existe. Deseja sobrescrevê-lo?(S/N): ",file_name);
	
		scanf("%c",&letra3);
		printf("\n");
		getchar();

		while(letra3 != 'S' && letra3 != 's' && letra3 != 'N' && letra3 != 'n'){
			printf("\nOPÇÃO INVÁLIDA!!");
			printf("\nDigite uma opção válida: ");
    	 	scanf("%c",&letra3); 
    	 	getchar();
		}

		if((letra3 == 'S') || (letra3 == 's')){
			
			fp = fopen(file_name,"w");
			
			for(int i = 0; i < 80 && estudantes[i].nome[0] != '\0'; i++){

				// enquanto i for menor que 80 e o primeiro caracter do nome for diferente de '\0' um novo estudante[i] será impresso no arquivo, 
			   // ou seja, se existir um caracter na linha correspondente ao nome no arranjo de estruturas significa que o arranjo de estruturas não chegou ao fim, portanto,
			  // enquanto o arranjo de estruturas não tiver chegado ao fim um novo estudante[i] será impresso no arquivo.

				fprintf(fp,"%s\n",estudantes[i].nome);
				fprintf(fp,"%s\n",estudantes[i].matricula);
				fprintf(fp,"%d\n",estudantes[i].notas_provas[0]);
				fprintf(fp,"%d\n",estudantes[i].notas_provas[1]);
				fprintf(fp,"%d\n",estudantes[i].notas_provas[2]);
				fprintf(fp,"%d\n",estudantes[i].notas_trabs[0]);
				fprintf(fp,"%d\n",estudantes[i].notas_trabs[1]);
				fprintf(fp,"%d\n",estudantes[i].faltas);
				fprintf(fp,"%d\n",estudantes[i].notafinal);
				fprintf(fp,"%c\n",estudantes[i].situacao);
			}
			fclose(fp);
			printf("Até a próxima\n");
			exit(1);
		}
		
		if((letra3 =='N') || (letra3 == 'n')){
			fclose(fp);
			printf("Até a próxima\n");
			exit(1);
		}
	}
}

/* @brief	  OBS_1: Esta função é chamada pela int main.
*		  
*			  OBS_2: Há um loop nesta função, portanto, depois que a função correspondente ao valor
*		 	         for executada o menu_principal será chamado de novo.
*		 
*		 EXPLICAÇÃO: Esta é a princípal função do programa, é a função que chama uma determinada função (há 7 disponiveis) de acordo com a opção digitada pelo usuário no menu_prinicpal;
*		 
*		      OBS_3: O arranjo de estruturas é declarado nesta função, tal arranjo de estruturas pode armazenar até 80 estudantes. 
*		 
*	          OBS_4: A file_name também é declarada nesta função, tal váriavel é extremamente útil ao longo do programa, ela é usada para armazenar o nome de um arquivo que foi lido ou 
*			    	 criado. 
*		 
* @param estudantes[] arranjo de estruturas 
* @param  file_name[] nome do arquivo, se o arquivo for criado ou lido o nome dele será armazenado nessa váriavel por meio da utlização da strcpy, tal função irá copiar o nome lido 
*					  para a váriavel file_name.
*/

void menu(void){
	int opcao = 0;
	int loop = 0;

    loop = 1;

	char file_name[50];

	Estudantes estudantes[80] = {{'\0'},{'\0'},{0},{0},0,0,'\0'};

	while(loop != 0){

		opcao = menu_principal();
		
			if(opcao == 1){
				ifs_1(estudantes,file_name);
			}
			else
			if(opcao == 2){
				ifs_2(estudantes,file_name);
			}else
			if(opcao == 3){
				ifs_3(estudantes,file_name);
			}
			else
			if(opcao == 4){
				ifs_4(estudantes,file_name);
			}
			else
			if(opcao == 5){
				ifs_5(estudantes,file_name);
			}
			else
			if(opcao == 6){
				ifs_6(estudantes,file_name);
			}
			else
			if(opcao == 7){
				ifs_7(estudantes,file_name);
			}
	}
	return;
}


/**
* @brief EXPLICAÇÃO: : A int main somente chama a função menu para o programa iniciar.
*
*/

int main(void){
	menu();
return 0;
}
















