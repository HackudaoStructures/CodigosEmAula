import java.lang.reflect.Field;

/**
 * @author : Guilherme Wachs Lopes (gwachs@fei.edu.br)
 * @file : reflection
 * @created : quinta mar 04, 2021 21:16:43 -03
 */

class Teste {
  int a;
  int b;
  int c;

  public int getA() {
    return a;
  }

  public void setA(int a) {
    this.a = a;
  }
}

public class reflection {
  public static void main(String[] args) {
    Teste a = new Teste();
    a.setA(20);

    for (Field f : Teste.class.getDeclaredFields()) {
      System.out.println(f.getName());
    }
  }
}
