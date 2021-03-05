class Ponto():
    x = 0
    y = 0

    def __init__(self, x, y):
        self.x = x
        self.y = y

    def __add__(self, direita):
        c = Ponto(self.x + direita.x, self.y + direita.y)
        return c

a = Ponto(10,5)
b = Ponto(20,1)

c = a + b
print(c.x, c.y)

