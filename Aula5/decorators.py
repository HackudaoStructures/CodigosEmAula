class Teste():

    @property
    def a(self):
        return self._a*2

    @a.setter
    def a(self, a):
        if a > 20:
            self._a = a
        else:
            self._a = 0


teste = Teste()

teste.a = 5
print(teste.a)
