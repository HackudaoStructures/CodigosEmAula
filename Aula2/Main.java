import java.util.List;
import java.util.ArrayList;

public class Main
{
  public static void main(String[] args) {
    List<FuncionarioBase> funcs = new ArrayList<FuncionarioBase>();

    funcs.add(new Vendedor(1000, 5000));
    funcs.add(new Comprador(10000, 5000));
    funcs.add(new Funcionario(20000));

    for (FuncionarioBase f : funcs) {
      System.out.println("Salario: " + f.calculaSalario());
    }

  }
}


