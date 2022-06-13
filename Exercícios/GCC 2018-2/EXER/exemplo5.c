/**
 * @file exemplo4.c
 * @brief Operações matemáticas sobre matrizes
 *
 *  As operações implementadas aqui são:
 *  - Preenche uma matriz com dados digitados;
 *  - Imprime o conteúdo da matriz;
 *  - Copia o conteúdo de uma matriz para outra;
 *  - Soma um número a todos os elementos da matriz;
 *  - Encontra a matriz transposta;
 *  - Soma duas matrizes;
 *  - Multiplica duas matrizes
 *
 * @author Alexsandro Santos Soares
 * @date 20/05/2018
 * @bugs Nenhum conhecido.
 */
#include <stdio.h>

/**
 * @brief Lê uma matriz a partir da entrada padrão
 *
 * @param[in] nLin número de linhas da matriz
 * @param[in] nCol número de colunas da matriz
 * @param[out] mat a matriz
 *
 * @post mat será preenchida com os valores lidos
 */
void leiaMatriz(int nLin, int nCol, double mat[nLin][nCol]){
  // Preenche a matriz linha por linha, a partir da primeira
  for(int i = 0; i < nLin; i++)
    for(int j = 0; j < nCol; j++)
      scanf("%lf", &mat[i][j]);

  return;
} // leiaMatriz


/**
 * @brief Imprime uma matriz para a saída padrão
 *
 * @param[in] nLin número de linhas da matriz
 * @param[in] nCol número de colunas da matriz
 * @param[in] mat a matriz
 *
 */
void imprimaMatriz(int nLin, int nCol, const double mat[nLin][nCol]){
  // Imprime a matriz linha por linha, a partir da primeira
  for(int i = 0; i < nLin; i++){
    for(int j = 0; j < nCol; j++)
      printf("%6.2lf", mat[i][j]);
    printf("\n");
  } // for i

  return;
} // imprimaMatriz


/**
 * @brief Copia o conteúdo da primeira matriz na segunda
 *
 * @param[in]  nLin  número de linhas da matriz
 * @param[in]  nCol  número de colunas da matriz
 * @param[in]  mat   a matriz original
 * @param[out] copia cópia da matriz mat
 *
 * @post copia será preenchida com os valores de mat
 */
void copieMatriz(int nLin, int nCol,
                 const double mat[nLin][nCol],
                 double copia[nLin][nCol]){
  for(int i = 0; i < nLin; i++)
    for(int j = 0; j < nCol; j++)
        copia[i][j] = mat[i][j];

  return;
} // copieMatriz


/**
 * @brief Soma um númera aos elmentos da matriz
 *
 * @param[in] nLin número de linhas da matriz
 * @param[in] nCol número de colunas da matriz
 * @param[in] num  número a ser adicionado aos elementos
 * @param[in/out] mat a matriz
 *
 * @post mat será alterada com a soma de num a seus elementos
 */
void somaNumero(int nLin, int nCol, double num,
                double mat[nLin][nCol]){

  for(int i = 0; i < nLin; i++)
    for(int j = 0; j < nCol; j++)
      mat[i][j] += num;

  return;
} // somaNumero


/**
 * @brief Encontra a matriz transposta
 *
 * @param[in]  nLin   número de linhas da matriz
 * @param[in]  nCol   número de colunas da matriz
 * @param[in]  mat    a matriz
 * @param[out] transp a matriz transposta de mat
 *
 * @post transp será preenchida com a transposta de mat
 */
void transposta(int nLin, int nCol,
		const double mat[nLin][nCol],
		double transp[nCol][nLin]){
  
  for(int i = 0; i < nLin; i++)
      for(int j = 0; j < nCol; j++)
          transp[j][i] = mat[i][j];

  return;
} // transposta


/**
 * @brief Soma duas matrizes
 *
 * @param[in]  nLin número de linhas da matriz
 * @param[in]  nCol número de colunas da matriz
 * @param[in]  mat1 a primeira matriz
 * @param[in]  mat2 a segunda matriz
 * @param[out] soma a matriz resultante da soma
 *
 * @pre  mat1 e mat2 devem ter as mesmas dimensões
 * @post soma será preenchida com mat1 + mat2
 */
void somaMatriz(int nLin, int nCol,
                const double mat1[nLin][nCol],
                const double mat2[nLin][nCol],
                double soma[nLin][nCol]){
  for(int i = 0; i < nLin; i++)
    for(int j = 0; j < nCol; j++)
      soma[i][j] = mat1[i][j] + mat2[i][j];

  return;
} // somaMatriz


/**
 * @brief Multiplica duas matrizes
 *
 * @param[in]  nLin número de linhas de mat1
 * @param[in]  nCol número de colunas de mat1
 * @param[in]  mat1 a primeira matriz
 * @param[in]  nCol2 número de colunas de mat2
 * @param[in]  mat2 a segunda matriz
 * @param[out] produto a matriz resultante do produto
 *
 * @pre  mat1, mat2 e produto devem ter dimensões compatíveis
 * @post produto será preenchida com mat1 * mat2
 */
void multiplicaMatriz(int nLin, int nCol,
		      const double mat1[nLin][nCol],
		      int nCol2,
		      const double mat2[nCol][nCol2],
		      double produto[nLin][nCol2]){
  for(int i = 0; i < nLin; i++)
    for(int j = 0; j < nCol2; j++){
      produto[i][j] = 0; // zera para acumular o somatório
      for(int k = 0; k < nCol; k++)
	produto[i][j] += mat1[i][k] * mat2[k][j];
    } // for j

  return;
} // multiplicaMatriz


/**
 * @brief Testa a soma de um número a uma matriz
 *
 *  O número a ser somado será perguntado ao usuário.
 *
 * @param[in]  nLin número de linhas da matriz
 * @param[in]  nCol número de colunas da matriz
 * @param[in]  mat a matriz
 */
void testeSomaNumero(int nLin, int nCol,
                     const double mat[nLin][nCol]){
    double num = 0.0;         // número a ser somado à matriz
    double copia[nLin][nCol]; // guarda a cópia da matriz mat

    // Faça a cópia da matriz mat
    copieMatriz(nLin, nCol, mat, copia);
    printf("\nDigite o número a ser somado à matriz: ");
    scanf("%lf", &num);

    somaNumero(nLin, nCol, num, copia);

    printf("\nResultado de somar %.2lf à matriz:\n", num);
    imprimaMatriz(nLin, nCol, copia);

    return;
} // testeSomaNumero


/**
 * @brief Testa a transposta de uma matriz
 *
 * @param[in]  nLin número de linhas da matriz
 * @param[in]  nCol número de colunas da matriz
 * @param[in]  mat a matriz
 */
void testeTransposta(int nLin, int nCol,
                     const double mat[nLin][nCol]){
     // A matriz transposta tem as dimensões permutadas em relação
     // à matriz original.
    double trans[nCol][nLin];

    transposta(nLin, nCol, mat, trans);

    printf("\nMatriz original:\n");
    imprimaMatriz(nLin, nCol, mat);

    printf("\nA transposta da matriz é:\n");
    imprimaMatriz(nCol, nLin, trans);

    return;
} // testeTransposta


/**
 * @brief Testa a soma de duas matrizes
 *
 * A segunda matriz será informada pelo usuário.
 *
 * @param[in]  nLin número de linhas da matriz
 * @param[in]  nCol número de colunas da matriz
 * @param[in]  mat a matriz
 */
void testeSomaMatriz(int nLin, int nCol,
                     const double mat[nLin][nCol]){
    // a segunda matriz deve ter as mesmas dimensões que a primeira
    double mat2[nLin][nCol];
    double soma[nLin][nCol]; // matriz soma de mat com mat2

    printf("\nDigite a segunda matriz (%d x %d)\n\n", nLin, nCol);
    leiaMatriz(nLin, nCol, mat2);

    somaMatriz(nLin, nCol, mat, mat2, soma);

    printf("\nA soma da matriz:\n");
    imprimaMatriz(nLin, nCol, mat);
    printf("com\n");
    imprimaMatriz(nLin, nCol, mat2);
    printf("é:\n");
    imprimaMatriz(nLin, nCol, soma);

    return;
} // testeSomaMatriz


/**
 * @brief Testa a multiplicação de duas matrizes
 *
 * A segunda matriz será informada pelo usuário.
 *
 * @param[in]  nLin número de linhas da matriz
 * @param[in]  nCol número de colunas da matriz
 * @param[in]  mat a matriz
 */
void testeMultiplicaMatriz(int nLin, int nCol,
                           const double mat[nLin][nCol]){
    int nCol2 = 0.0; // número de colunas da segunda matriz
    printf("\nDigite o número de colunas da segunda matriz: ");
    scanf("%d", &nCol2);
    {
        // O número de linhas da segunda matriz deve ser igual
        // ao número de colunas da primeira
        double mat2[nCol][nCol2]; // matriz de tamanho variável

        // As dimensões da matriz produto entre uma matriz A (l x m) e
        // uma matriz B (m x n) é (l x n)
        double produto[nLin][nCol2]; // matriz produto de mat por mat2

        printf("Digite a segunda matriz (%d x %d)\n\n", nCol, nCol2);
        leiaMatriz(nLin, nCol, mat2);

        multiplicaMatriz(nLin, nCol, mat, nCol2, mat2, produto);

        printf("\nO produto da matriz:\n");
        imprimaMatriz(nLin, nCol, mat);
        printf("com\n");
        imprimaMatriz(nCol, nCol2, mat2);
        printf("é:\n");
        imprimaMatriz(nLin, nCol2, produto);
    }
    return;
} // testeMultiplicaMatriz


int main(void){
  int nLin = 0;     // número de linhas
  int nCol = 0;     // número de colunas

  printf("Digite o número de linhas da primeira matriz: ");
  scanf("%d", &nLin);
  printf("Digite o número de colunas da primeira matriz: ");
  scanf("%d", &nCol);
  {
    double mat[nLin][nCol]; // matriz de tamanho variável

    printf("Digite os elementos da primeira matriz\n\n");
    leiaMatriz(nLin, nCol, mat);

    printf("\nPrimeira matriz:\n");
    imprimaMatriz(nLin, nCol, mat);

    testeSomaNumero(nLin, nCol, mat);
    testeTransposta(nLin, nCol, mat);
    testeSomaMatriz(nLin, nCol, mat);
    testeMultiplicaMatriz(nLin, nCol, mat);
  }

  printf("\n");
  return 0;
} // main
