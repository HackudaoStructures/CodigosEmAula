/**
 * @author      : Guilherme Wachs Lopes (gwachs@fei.edu.br)
 * @file        : metodosVirtuais
 * @created     : quinta mar 25, 2021 21:14:41 -03
 */

#include <iostream>
#include <string>

using namespace std;


class Estrutura {
  public:
  virtual void insere(int valor) = 0;
  virtual ~Estrutura(){}
};

class Lista : public Estrutura{
  public:
    void insere(int valor){
      cout << "inserindo do jeito LISTA" << valor << endl;
    }

    ~Lista(){
      cout << "terminou" << endl;
    }
};  

class ListaNoArquivo : public Estrutura{
  private:
    string arquivo;
  public:
    ListaNoArquivo(string arquivo) {
      this->arquivo=arquivo;
    }
    void insere(int valor){
      cout << "inserindo " << valor << " no arquivo " << this->arquivo << endl;
    }

};  

//RAII -> Resource Acquisition is Initialization
class ConexaoBanco {
  private:
    bool conectado;
  public:
    ConexaoBanco(){
      cout << "Conectado com o banco" << endl;
      conectado=true;
    }

    ~ConexaoBanco(){
      cout << "Desconectado do banco" << endl;
    }
  
};


int main() {
  Estrutura *x = new ListaNoArquivo("arq.txt");

  if(1){
    ConexaoBanco aa;

  }

  
  x->insere(10);
  
  delete x;

  {
    cout <<"cria lista"<< endl;
    Lista a;
    cout <<"antes de destruir lista"<< endl;
  }

  return 0;
}

