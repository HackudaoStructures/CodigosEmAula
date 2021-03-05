/**
 * @author      : Guilherme Wachs Lopes (gwachs@fei.edu.br)
 * @file        : declaraClasse
 * @created     : quinta mar 04, 2021 21:54:18 -03
 */

#include <iostream>
#include <ostream>
#include <string>

using namespace std;

void dobraNaCopia(int a){ //só dobra na cópia de x
  a = a * 2;
}

void dobra(int& a){  //referência para a variável que recebo
  a = a * 2;
}

void dobraPtr(int *a){  //ponteiro para o end. que recebo
  *a = *a  *  2;
}

int main() {
  
  int x = 10;   //variável

  dobra(x);
  dobraPtr(&x);

  cout << x << endl;
  return 0;
}
