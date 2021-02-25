
public class TemSalarioStrategy implements SalarioBaseStrategy{
  float salario;

  public TemSalarioStrategy(float salario){
    this.salario = salario;
  }

  @Override
  public float calculaSalarioBase(){
    return salario;
  }
}
