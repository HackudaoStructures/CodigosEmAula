/**
 * @author      : Guilherme Wachs Lopes (gwachs@fei.edu.br)
 * @file        : declaraClasse
 * @created     : quinta mar 04, 2021 21:54:18 -03
 */

class Teste {
  private:
    int a;
  public:
    float b;
  protected:
    double t;
};

class TesteSub : private Teste {
  void teste(){
    this->t = 9;
  }
};

class TesteSubSub : public TesteSub {
  void teste2(){
  }
};



int main() {
  
 Teste x;
 TesteSub y;
  y.
 


  return 0;
}
