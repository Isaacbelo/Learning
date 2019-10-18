/*
Exercício 3: faça um algoritmo que preencha uma matriz de inteiros 3×3 com valores aleatórios entre -50 e 50 e, através de uma função, retorne quantas vezes aparece o número zero.

*/
#include <iostream>
#include <iomanip>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void geraMatriz(int mat[][3]) {
  
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      mat[i][j] = rand() % 10-5;
    }
  }
}
void mostraMatriz(int mat[][3]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "Posicao [" << i << "][" << j << "] = " <<mat[i][j] << endl;
    }
  }
}
int contaZero(int mat[][3]) {
  int cont = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (mat[i][j] == 0) {
        cont = cont + 1;
      }
    }
  } return cont;
}
int main() {
  srand(time(NULL));
  
  int matriz[3][3];

  geraMatriz(matriz);
  mostraMatriz(matriz);
  cout << "\nO numero '0' aparece "<< contaZero(matriz) << " vezes. ";





  return 0;
}