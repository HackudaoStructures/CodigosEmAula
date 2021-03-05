class Teste():
    _a = 0
    _b = 0
    _c = 0

    def setA(self, a):
        self._a = a

    def getA(self):
        return self._a


class SubClasse(Teste):
    def getDobroA(self):
        return self._a*2


