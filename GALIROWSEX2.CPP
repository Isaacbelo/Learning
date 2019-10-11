/*
EXERCÍCIO: Dado um vetor de 50 posições preenchido com valores entre 1 e 50, faça uma função que receba o vetor e um valor. Com o valor faça:
Se o valor for par e maior do que 30, some o valor a cada elemento do vetor;
Se o valor for impar e menor do que 2, inverta os valores do vetor; 
Caso nenhuma das condições anteriores, os valores do vetor passam a possuir a raiz quadrada deles mesmos.
VERSÃO: 1.0
DATA: 11/10/19
FONTE: http://www.galirows.com.br/meublog/programacao/exercicios-resolvidos-c2/

*/

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <iomanip>
#include <math.h>
#define TAMANHO 10
using namespace std;

void geraVetor(float vet[]) {
  int intervalo = 50 + 1;
  for (int i = 0; i < TAMANHO; i++) {
    vet[i] = rand()% intervalo;
  }
}
void mostraVetor(float vet[]){
  for (int i = 0; i < TAMANHO; i++) {
    cout << "Posicao "<< setw(3) << i << " = " << setw(2) << vet[i] << endl;
  }
}
void somaVetor(float vet[], int num) {
  for (int i = 0; i < TAMANHO; i++) {
    vet[i] = vet[i] + num;
  }
}
void inverteVetor(float vet[], int num) {
  for (int i = TAMANHO - 1; i >= 0; i--) {
     cout << "Posicao "<< setw(3) << i << " = " << setw(2) << vet[i] << endl;
  }
}
void raizVetor(float vet[]) {
  for (int i = 0; i < TAMANHO; i++) {
    vet[i] = sqrt(vet[i]);
    cout << setprecision(2);
    cout << "Posicao "<< setw(3) << i << " = " << setw(3) << vet[i] << endl;
  }
}

int main() {
  srand(time(NULL));
  float vetor[TAMANHO];
  int numero = 0;
  //gera vetor de 50 posições aleatórias
  geraVetor(vetor);
  mostraVetor(vetor);
  cout << "Digite um numero: ";
  cin >> numero;
  //Se o valor for par e maior do que 30, some o valor a cada elemento do vetor;
  //Se o valor for impar e menor do que 2, inverta os valores do vetor;
  //Caso nenhuma das condições anteriores, os valores do vetor passam a possuir a raiz quadrada deles mesmos.
  if (numero % 2 == 0 && numero > 30) {
    cout << "\n*****Numero par e maior que 30*****\n " << endl;
    somaVetor(vetor,numero);
    mostraVetor(vetor);
  } else if (numero % 2 !=0 && numero <2){
    cout << "\n*****Numero impar e menor que 2*****\n " << endl;
    inverteVetor(vetor,numero);
    mostraVetor(vetor);
  } else {
    cout << "\n*****Numero par, menor que 30, ou impar maior que 2*****\n " << endl;
    raizVetor(vetor);

  }

  return 0;
}