public class Funcionario extends FuncionarioBase{

  float vendas=0;

	public Funcionario(float salarioBase) {
		super(new TemSalarioStrategy(salarioBase), new NaoTemComissaoStrategy());
	}

}

