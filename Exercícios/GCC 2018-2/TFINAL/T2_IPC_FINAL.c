/**
* @file T2_IPC_FINAL.c
* @brief	Inicialmente o usuário possui 7 escolhas:
*		
*			1 - Ler turma de estudantes do arquivo
*				Essa funçao lerá uma turma de estudantes de um arquivo com os seguintes dados: nome do aluno, matricula, notas das provas, notas dos trabalhos, quantidade de faltas,
*  			  	e a situação(Aprovado/Reprovado), e a armazenará em um arranjo de estruturas. Se o arquivo não existir, poderá ser criado.
*		    
*			2 - Imprimir turma de estudantes
*				Essa função imprimirá na tela (no formato de uma tabela) os dados presentes no arranjo de estruturas que foram lidos, inseridos ou editados.   
*
*		    3 - Imprimir estatisticas da turma
*		    	Essa função imprimirá na tela (no formato de uma tabela) as estatisticas dos dados presentes no arranjo de estruturas que foram lidos, inseridos ou editados.
*
*			4 - Cadastrar novo estudante
*				Essa função serve para o usuário inserir novos dados no arranjo de estruturuas, ou seja, serve para cadastrar um novo estudante.
*			
*			5 - Editar informações de um estudante
*				Essa função serve para o usuário editar/alterar os dados que estão no arranjo de estruturas.
*			
*			6 - Reler turma de estudantes do arquivo
*				Essa função serve para que a turma de estudantes seja lida de novo, ou seja, serve para que todos os dados inseridos ou editados no arranjo de estruturas sejam apagados. 
*			
*			7 -Salvar e sair.
*				Essa função serve para que todas as alterações feitas no arrajos de estruturas sejam salvas, ou seja, serve para que os dados sejam escritos no arquivo.  
*
*			O programa possui 25 funções no total,
*			tais funções servem para realizar o que é pedido pelas funçoes principais de forma separada e organizada, algumas funções são sub-menus, 
*			outras realizam calculos, outras são para leitura de dados, outras são para impressão de dados etc, ou seja, cada função realiza uma tarefa.
*
* @author Euller Henrique Bandeira Oliveira
* @date 15/12/2018
* @bugs Nenhum conhecido.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* @brief Esta struct armazenará o nome do aluno como um vetor de caracteres, ou seja, uma string (pode ter no máximo 50 caracteres); 
*		 a matrícula como um vetor de caracteres, ou seja, uma string,(pode ter no máximo 11 carateres);
*		 as notas das provas como um vetor de inteiros, ou seja, a nota da P1 é notas_provas[0], a nota da P2 é notas_provas[1], a nota da P3 é nota nota_prova[2]; 
*		 as notas dos trabalhos como um vetor de inteiros, ou seja, a nota do T1 é notas_trabs[0], a nota do T2 é notas_trabs[1];
*		 a quantidade de faltas;
*		 a situação do aluno(Aprovado/Reprovado);
*
*/

typedef struct 
{
	char nome[51];
	char matricula[13];
	int  notas_provas[3];
	int  notas_trabs[3];
	int  faltas;
	int  notafinal;
	char situacao;
} Estudantes;


/**
* @brief Esta função imprimirá as principais opções disponiveis no programa, ou seja, imprimirá as opções do menu principal, logo após tal função lerá o valor 
*		 da opção digitada pelo usuário e retornará tal valor para função menu, há um loop na função menu, portanto, depois que a função correspondente ao valor
*		 ser executada o menu_principal será chamado de novo;
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
* @brief Esta função faz parte da execução da função equivalente a opção 1 digitada pelo usúario no menu principal , ou seja, está função é chamada pela função ifs_1,
*		 há um loop na função if_1, ou seja, após a execução da função equivalente a opção digitada pelo usuário, o menu_opcao_1 será chamado novamente. 
*		 Esta função irá imprimir as sub-opções disponiveis na primeira opção do menu_principal, logo após a função leŕa o valor digitado pelo usuário e retornará tal
*		 valor para a função ifs_1. 
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
* @brief Esta função faz parte da execução da função equivalente a opção 1 digitada pelo usúario na função menu_opcao_1, ou seja, está função é chamada pela função ifs_1,
*		 há um loop na função ifs_1, ou seja, após a execução da função turma_1, o menu_opcao_1 será chamado novamente. 
*		 Esta função pedirá para o usuário digitar o nome do arquivo que será lido, se o arquivo não existir uma mensagem dizendo isso será exibida, se existir os dados do arquivo
*		 serão lidos e armazenados no arranjo estrutura. Se o arquivo estiver vazio a estrutura ficará vazia.
*		 
* @param estudantes[] arranjo de estrutura 
* @param file_name[]  nome do arquivo, se o arquivo existir o nome dele será armazenado nessa váriavel por meio da utlização da strcpy, tal função irá copia o nome lido para a váriavel file_name.
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
	}
	if(fp != NULL){
	   	for(int i = 0; i < 80 && feof(fp) == 0; i++){
   			fgets(estudantes[i].nome,sizeof(estudantes[i].nome),fp);
			estudantes[i].nome[strcspn(estudantes[i].nome,"\n")] = 0;
			
		if ((estudantes[i].nome) == NULL) {
			fprintf(stderr,"Erro ao ler a string\n");
			exit(1);
		}

		fscanf(fp,"%s\n",estudantes[i].matricula);
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
* @brief Esta função faz parte da execução da função equivalente a opção 2 digitada pelo usúario na função menu_opcao_1, ou seja, está função é chamada pela função ifs_1,
*		 há um loop na função ifs_1, ou seja, após a execução da função turma_2, o menu_opcao_1 será chamado novamente. 
*		 Esta função pedirá para o usuário digitar o nome do arquivo que será lido, se o arquivo não existir será criado, se existir o usuário poderá decidir entre subescrever (apagar conteúdo) ou não.
*		 
* @param estudantes[] arranjo de estrutura 
* @param file_name[]  nome do arquivo, se o arquivo for criado o nome dele será armazenado nessa váriavel por meio da utlização da strcpy, tal função irá copiar o nome lido para a váriavel file_name.
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
						fclose(fp);
						return;
					}
					if(letra == 'N' || letra == 'n'){
						return;
					}
    			}
}

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
			estudantes[i].notafinal = estudantes[i].notas_provas[0] + estudantes[i].notas_provas[1] + estudantes[i].notas_provas[2] + estudantes[i].notas_trabs[0] + estudantes[i].notas_trabs[1];
   		 	
   		 	if(estudantes[i].faltas <= 18 && estudantes[i].notafinal >= 60){
				estudantes[i].situacao = 'A';
			}else
			if(estudantes[i].faltas > 18){
				estudantes[i].situacao = 'F';
			}else{
			estudantes[i].situacao = 'R';
			}

   		 printf("%-50s %13s %4d %4.d %4d %4d %4d %5d %7d %4c\n",
   		 estudantes[i].nome,estudantes[i].matricula,estudantes[i].notas_provas[0],estudantes[i].notas_provas[1],estudantes[i].notas_provas[2],
   		 estudantes[i].notas_trabs[0],estudantes[i].notas_trabs[1],
   		 estudantes[i].faltas,estudantes[i].notafinal,estudantes[i].situacao);
   		 }
   		 printf("------------------------------------------------------------------------------------------------------------\n");
   		 fclose(fp);
	}
	return;
}

void calculos_1(Estudantes estudantes[],char file_name[],int i){
			
			estudantes[i].notafinal = estudantes[i].notas_provas[0] + estudantes[i].notas_provas[1] + estudantes[i].notas_provas[2] + estudantes[i].notas_trabs[0] + estudantes[i].notas_trabs[1];
   		 	
   		 	if(estudantes[i].faltas <= 18 && estudantes[i].notafinal >= 60){
				estudantes[i].situacao = 'A';
			}else
			if(estudantes[i].faltas > 18){
				estudantes[i].situacao = 'F';
			}else{
				estudantes[i].situacao = 'R';
			}
return;
}

void calculos_2(Estudantes estudantes[], char file_name[], int* maiorP1,int* menorP1, int* maiorP2, int* menorP2, int* maiorP3, int* menorP3, int* maiorT1, int* menorT1, int* maiorT2, int* menorT2, int* maiorNF, int* menorNF,int i){
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

void calculos_3(Estudantes estudantes[], char file_name[],double* mediaP1, double* mediaP2, double* mediaP3, double* mediaT1, double* mediaT2, int* notaTOTAL,int* qtd_alunos,int* qtd_A,int* qtd_F,int* qtd_R,int i){

				*mediaP1 = *mediaP1 + estudantes[i].notas_provas[0]; 
				*mediaP2 = *mediaP2 + estudantes[i].notas_provas[1];
				*mediaP3 = *mediaP3 + estudantes[i].notas_provas[2];

				*mediaT1 = *mediaT1 + estudantes[i].notas_trabs[0];
				*mediaT2 = *mediaT2 + estudantes[i].notas_trabs[1];

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

void calculos_4(Estudantes estudantes[],char file_name[],double* mediaP1, double* mediaP2, double* mediaP3, double* mediaT1,double* mediaT2, double* media,double* per_A, double* per_R, double* per_F,int* qtd_alunos,int* qtd_A,int* qtd_R,int* qtd_F,int* notaTOTAL, int i){
	
		if(i > 1){		
				*mediaP1 = *mediaP1 / (double) *qtd_alunos;
				*mediaP2 = *mediaP2 / (double) *qtd_alunos;
				*mediaP3 = *mediaP3 / (double) *qtd_alunos;

				*mediaT1 = *mediaT1 / (double) *qtd_alunos;
				*mediaT2 = *mediaT2 / (double)  *qtd_alunos;

				*media = *notaTOTAL / (double) *qtd_alunos;

				*per_A = *qtd_A * 100 / *qtd_alunos;
				*per_R = *qtd_R * 100 / *qtd_alunos;
				*per_F = *qtd_F * 100 / *qtd_alunos;
		}
return;
}

void ifs_3(Estudantes estudantes[], char file_name[]){
	int maiorP1 = 0;int menorP1 = 0;int maiorP2 = 0;int menorP2 = 0;int maiorP3 = 0;int menorP3 = 0;int maiorT1 = 0;int menorT1 = 0;int maiorT2 = 0;int menorT2 = 0;int maiorNF = 0;int menorNF = 0;int notaTOTAL = 0;
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
				calculos_1(estudantes,file_name,i);
				calculos_2(estudantes,file_name,&maiorP1,&menorP1,&maiorP2,&menorP2,&maiorP3,&menorP3,&maiorT1,&menorT1,&maiorT2,&menorT2,&maiorNF,&menorNF,i);
				calculos_3(estudantes,file_name,&mediaP1,&mediaP2,&mediaP3,&mediaT1,&mediaT2,&notaTOTAL,&qtd_alunos,&qtd_A,&qtd_R,&qtd_F,i);
			}
				calculos_4(estudantes,file_name,&mediaP1,&mediaP2,&mediaP3,&mediaT1,&mediaT2,&media,&per_A,&per_R,&per_F,&qtd_alunos,&qtd_A,&qtd_R,&qtd_F,&notaTOTAL,i);
		
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

void cadastrar(Estudantes estudantes[],char file_name[],int i){

		fgets(estudantes[i].nome,sizeof(estudantes[i].nome),stdin);
		estudantes[i].nome[strcspn(estudantes[i].nome,"\n")] = 0;
				
		if ((estudantes[i].nome) == NULL) {
			fprintf(stderr,"Erro ao ler a string\n");
			exit(1);
		}

		printf("Digite a matrícula: ");
		scanf("%s",estudantes[i].matricula);
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

		estudantes[i].notafinal = estudantes[i].notas_provas[0] + estudantes[i].notas_provas[1] + estudantes[i].notas_provas[2] + estudantes[i].notas_trabs[0] + estudantes[i].notas_trabs[1];
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
        }
}

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
				
				cadastrar(estudantes,file_name,i);
				fclose(fp);
			}else{
			
			printf("Impossivel cadastrar. Arquivo cheio\n\n");
		}
	}
return;		
}

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

int editar_m(Estudantes estudantes[],char file_name[],int i,int escolha4){
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
			scanf("%s",estudantes[i].matricula);
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
		if(escolha4 == 9){
			return 0;
		}
		printf("\n");		
return 1;
}

void menu_opcao_3(Estudantes estudantes[],char file_name[]){
	char matricula[13];int i = 0;int escolha4 = 0;int loop = 0;
   	loop = 1;

        	printf("Digite o número de matrı́cula: ");
        	scanf("%s",matricula);
        	printf("\n");
        	getchar();

			while(loop !=0){
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
	        			printf("7 - Alterar nota do trabablho 2\n");
	        			printf("8 - Alterar número de faltas\n");
	        			printf("9 - Voltar ao menu anterior\n\n");
	        			printf("Digite uma opção: ");

	        			scanf("%d",&escolha4);
	        			printf("\n");
	        			getchar();

				       loop = editar_m(estudantes,file_name,i,escolha4);
					}
				}
				if(strcmp(matricula,estudantes[i].matricula) != 0){
					if(i == 79){
						printf("\nNúmero de matrı́cula inválido!\n\n");
						return;
					}
				}	
			}
		}
}


int editar_n(Estudantes estudantes[],char file_name[],int i, int escolha4){
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

			scanf("%s",estudantes[i].matricula);
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
		if(escolha4 == 9){
			return 0; 
		}		
		printf("\n");
return 1;
}										

void menu_opcao_4(Estudantes estudantes[],char file_name[]){
	char nome[51];int i = 0;int escolha4 = 0;int loop = 0;
    loop = 1;

 			printf("Digite o nome do estudante: ");
        	fgets(nome,sizeof(nome),stdin);
			nome[strcspn(nome,"\n")] = 0;

			if (nome == NULL) {
				fprintf(stderr,"Erro ao ler a string\n");
				exit(1);
			}
			while(loop !=0){
  	
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

				      	loop = editar_n(estudantes,file_name,i,escolha4);
						}
				}
				if(strcmp(nome,estudantes[i].nome) != 0){
					if(i == 79){
						printf("\nNome do aluno inválido!\n\n");
						return;
					}
				}		
			}
    	}
}

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

void rele(Estudantes estudantes[],char file_name[]){
	
	FILE *fp;
	fp = fopen(file_name,"r");
			if(fp == NULL){
				return;
			}
			if(fp != NULL){
	   			for(int i = 0; i < 80 && feof(fp) == 0; i++){
	   				fgets(estudantes[i].nome,sizeof(estudantes[i].nome),fp);
					estudantes[i].nome[strcspn(estudantes[i].nome,"\n")] = 0;
					if ((estudantes[i].nome) == NULL) {
					fprintf(stderr,"Erro ao ler a string\n");
					exit(1);
					}
					fscanf(fp,"%s\n",estudantes[i].matricula);
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
				return;
	 		}
}

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
				fclose(fp);
			}

	rele(estudantes,file_name);
}

void existe(Estudantes estudantes[], char file_name[]){
	FILE *fp;
	fp = fopen(file_name,"r");
	char letra;

	if(fp != NULL){
		printf("Arquivo %s já existe. Deseja sobrescrevê-lo?(S/N): ",file_name);
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
			fp = fopen(file_name,"w");
			for(int i = 0; i < 80 && estudantes[i].nome[0] != '\0';i++){
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
		if((letra =='N') || (letra == 'n')){
			fclose(fp);
			printf("Até a próxima\n");
			exit(1);
		}
	}
}

void ifs_7(Estudantes estudantes[], char file_name[]){
	FILE *fp;
	fp = fopen(file_name,"r");
	
	char letra;
	if(fp == NULL){
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
	
			fp = fopen(file_name,"w");
			fclose(fp);
			printf("Até a próxima\n");
			exit(1);
		}
		if(letra == 'N' || letra == 'n'){
			printf("Até a próxima\n");
			exit(1);
		}
	}
	if(fp != NULL){
		existe(estudantes,file_name);
	}
}

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

int main(void){
	menu();
return 0;
}
