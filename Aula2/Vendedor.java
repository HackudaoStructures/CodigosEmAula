public class Vendedor extends FuncionarioBase{

  float vendas=0;

	public Vendedor(float salarioBase, float vendas) {
		super(new TemSalarioStrategy(salarioBase), new TemComissaoStrategy(vendas,0.15f));
	}

}

