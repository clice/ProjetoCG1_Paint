#ifndef MATRIZ_H
#define MATRIZ_H

/*
 * ESTRUTURA PARA A MATRIZ 3x1
 */
typedef struct Matriz3Por1
{
    float matriz[3][1];     // Matriz para armazenar uma matriz 3x1
} Matriz3Por1;

/*
 * ESTRUTURA PARA A MATRIZ 3x3
 */
typedef struct Matriz3Por3
{
    float matriz[3][3];   // Matriz para armazenar uma matriz 3x1
} Matriz3Por3;

///////////////////////////////////////////////////////////////////

/*
 * DECLARAÇÕES DAS FUNÇÕES
 */
Matriz3Por1 * criarMatriz3Por1(float x, float y);
Matriz3Por1 * multiplicarMatriz3Por3PorMatriz3Por1(Matriz3Por3 * matriz3Por3, Matriz3Por1 * matriz3Por1);

Matriz3Por3 * criarMatriz3Por3();
Matriz3Por3 * multiplicarMatrizes3Por3(Matriz3Por3 * matriz1, Matriz3Por3 * matriz2);

Matriz3Por3 * criarMatrizTranslacao(float finalX, float finalY);
Matriz3Por3 * criarMatrizRotacao(float anguloTheta);
Matriz3Por3 * criarMatrizEscalar(float escala);

#endif // MATRIZ_H
