/**
 * @author      : Guilherme Wachs Lopes (gwachs@fei.edu.br)
 * @file        : main
 * @created     : quarta mar 17, 2021 22:14:18 -03
 */

#include <iostream>
using namespace std;

template <typename T> class Lista {
public:
  virtual bool insere(T valor) = 0;
  virtual bool remove(int pos) = 0;
  virtual int busca(T valor) = 0;
  virtual int buscaBinaria(T valor) = 0;
  virtual void imprime() = 0;
  virtual int getTamanho() = 0;
  virtual int getCapacidade() = 0;
  virtual ~Lista() {}
};

template <typename T> class LDS : public Lista<T> {
private:
  T *v;
  int n;
  int MAX;

  bool realoca(int newMax) {
    T *novoLugar = new T[newMax];
    if (novoLugar == nullptr) {
      return false;
    }

    for (int i = 0; i < n; i++) {
      novoLugar[i] = v[i];
    }
    delete[] v;
    v = novoLugar;
    MAX = newMax;
    return true;
  }

public:
  LDS(int max = 10) {
    this->v = new T[max];
    this->n = 0;
    this->MAX = max;
  }

  bool insere(T valor) {
    // Checa n<MAX
    if (n == MAX){
      if(realoca(2*MAX) == false){
        return false;
      }
    }

    // posicao de inserir
    int i;
    for (i = 0; i < n && v[i] < valor; i++)
      ;

    // deslocar para direita
    for (int j = n; j > i; j--) {
      v[j] = v[j - 1];
    }

    // inserir
    v[i] = valor;
    // n++
    n++;

    return true;
  }


  int getTamanho(){
    return n;
  }
  int getCapacidade(){
    return MAX;
  }

  bool remove(int pos) {
    if (pos >= n || pos < 0)
      return false;

    for (int i = pos; i + 1 < n; i++) {
      v[i] = v[i + 1];
    }
    n--;
    return true;
  }

  int busca(T valor) {
    // i=0
    int i = 0;
    // varrer até pos  i=n-1  /// ou paro no primeiro num maior
    // valor == v[i]
    for (int i = 0; i < n && v[i] <= valor; i++) {
      //  se em algum momento v[i] == valor buscado
      if (v[i] == valor)
        //   return i
        return i;
    }

    return -1;
  }

  int buscaBinaria(T valor) {
    int i = 0;
    int f = n - 1;
    int p;
    while (i <= f) {
      p = (i + f) / 2;
      if (v[p] < valor)
        i = p + 1;
      else if (v[p] > valor)
        f = p - 1;
      else
        return p;
    }
    return -1;
  }

  void imprime() {
    for (int i = 0; i < n; i++) {
      cout << v[i] << endl;
    }
  }
  ~LDS() { delete[] v; }
};

int main() {
  LDS<float> l(1);
  l.insere(5.2);
  l.insere(1);
  l.insere(9);
  l.insere(0);
  l.insere(8);
  cout << "Capacidade: " << l.getCapacidade() << endl;
  cout << "Tamanho: " << l.getTamanho() << endl;
  cout << l.busca(1) << endl;
  l.remove(l.busca(8));
  l.remove(l.busca(1));
  cout << l.busca(1) << endl;
  cout << "======" << endl;
  l.imprime();

  return 0;
}

