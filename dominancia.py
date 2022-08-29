Matrix = []
lista = []
x0 = []
x1 = []
controle = []
var = 0
erro = float()
Entrada = int(input())

for i in range(0, Entrada):
    for j in range (0, Entrada):
        a = float(input())
        lista.append(a)
    Matrix.append(lista)
    lista = []

for i in range(0, Entrada):
    a = float(input())
    controle.append(a)
for i in range(0, Entrada):
    x0.append(0.)
    x1.append(0.)

emin = float(input())
emax = float(input())
erro = (emax - emin)

while (var <= 100) and erro >= emin and erro <= emax:
    for i in range(0, Entrada):
        x1[i] = controle[i]/Matrix[i][i]
        for j in range(0, Entrada):
            if j != i:
                x1[i] += ((-Matrix[i][j])*(x0[j]))/Matrix[i][i]
                
    erro = 0
    for i in range(0, Entrada):
        erro += (1 - x1[i])**2
    erro = erro**(1/2)

    for i in range(0, Entrada):
        x0[i] = x1[i]
    var += 1

for i in range(0,Entrada):
    print("Jacobi: ",round(x1[i],10))
print("Jacobi: ", var,"\nJacobi: ", round(erro,10))

for i in range(0, Entrada):
    x1[i] = 0

erro = (emax - emin)
var = 0

while (var <= 100) and erro >= emin and erro <= emax:
    for i in range(0, Entrada):
        x1[i] = controle[i]/Matrix[i][i]
        for j in range(0, Entrada):
            if j != i:
                x1[i] += ((-Matrix[i][j])*(x1[j]))/Matrix[i][i]

    erro = 0

    for i in range(0, Entrada):
        erro += (1 - x1[i])**2
    erro = erro**(1/2)

    for i in range(0, Entrada):
        x0[i] = x1[i]
    var += 1

for i in range(0,Entrada):
    print("Gauss-Seidel: ",round(x1[i],10))
print("Gauss-Seidel: ", var,"\nGauss-Seidel: ", round(erro,10))