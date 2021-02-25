public abstract class FuncionarioBase{
  SalarioBaseStrategy salarioStrategy;
  ComissaoStrategy comissaoStrategy;

  FuncionarioBase(SalarioBaseStrategy salStrategy, ComissaoStrategy comStrategy){
    this.salarioStrategy = salStrategy;
    this.comissaoStrategy = comStrategy;
  }

  public float calculaSalario(){
    return salarioStrategy.calculaSalarioBase() 
      + comissaoStrategy.calculaComissao();
  }
}

