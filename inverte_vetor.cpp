/*
PROGRAMA: Dada uma seqüência de n números, imprimi-la na ordem inversa à da leitura.
LINGUAGEM: C++
VERSÃO: 1.0
AUTOR: ISAAC BELO
FONTE:https://www.ime.usp.br/~macmulti/exercicios/vetores/index.html
*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
#define n 5
using namespace std;

void geraValor(int valores[]) {

  for (int i = 0; i < n; i++) {
    valores[i] = rand() % 100;
    cout << "Posicao " << i << " = " << valores[i] << endl;
  }
}
void inverteValores(int valores[]) {
  for (int j = n-1; j >= 0; j--) {
    cout << "Posicao " << j << " = " << valores[j] << endl;
  }
}

int main() {
  int valores[n]={};
  srand(time(NULL));
  cout << "VETOR GERADO"    << endl;
  geraValor(valores);
  cout << "\nVETOR INVERTIDO" << endl;
  inverteValores(valores);
  
  cout << endl;
  
  system("PAUSE");
  return 0;
}