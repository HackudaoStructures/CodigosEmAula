
public class TemComissaoStrategy implements ComissaoStrategy{
  float total;
  float porc;
  public TemComissaoStrategy(float total, float porc){
    this.total = total;
    this.porc = porc;
  }
	@Override
	public float calculaComissao() {
		return this.total * this.porc;
	}
  
}

