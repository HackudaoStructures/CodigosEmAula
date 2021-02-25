public class Comprador extends FuncionarioBase{

	public Comprador(float salarioBase, float compras) {
		super(new TemSalarioStrategy(salarioBase), new TemComissaoStrategy(compras,0.05f));
	}


}

