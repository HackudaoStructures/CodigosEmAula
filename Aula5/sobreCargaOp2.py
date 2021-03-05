class Lista():
    v = []
    def __le__(self, elemento):
        self.v.append(elemento)
        return self


l = Lista()
l <= 5
l <= 8

print(l.v)
