

class testeRaii:
    def __enter__(self):
        print("entrou de escopo")

    def __exit__(self,a,b,c):
        print("entrou de escopo")
        print("asdasd", a)
        print("bbb", b)
        print("zzz", c)

with testeRaii() as f:
    print("teste")
    raise Exception("sdffsd")

