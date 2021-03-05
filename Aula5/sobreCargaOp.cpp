/**
 * @author      : Guilherme Wachs Lopes (gwachs@fei.edu.br)
 * @file        : declaraClasse
 * @created     : quinta mar 04, 2021 21:54:18 -03
 */

#include <iostream>
#include <ostream>
#include <string>

using namespace std;

class Ponto {
private:
  int x;
  int y;

public:
  Ponto(int x, int y) {
    this->x = x;
    this->y = y;
  }

  void imprime(){
    cout << "Ponto" << endl;
    cout << "x= " << this->x << endl;
    cout << "y= " << this->y << endl;
  }


  friend Ponto operator+(Ponto esq, Ponto dir);
  friend void operator<<(ostream& out, Ponto p);
};


Ponto operator+(Ponto esq, Ponto dir){
  Ponto c(esq.x + dir.x, esq.y + dir.y);
  return c;
}


void operator<<(ostream& out, Ponto p){
  out << "Ponto" << endl;
  out << "x = " << p.x << endl;
  out << "y = " << p.y << endl;
  out << "========" << endl;
}

int main() {
  Ponto p1(10,20);
  Ponto p2(14,22);

  Ponto p3(0,0);
  p3 = p1 + p2;
  cout << p3;
  cout << p3;


  return 0;
}
