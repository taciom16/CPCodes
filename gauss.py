#Método de eliminação de Gauss
Entrada = int(input())
Matrix = []
espelho = []
lista = []
listaespelho = []
a = int()
matrix_1 = []
matrix_2 = []
matrix_3 = []
matrix_4 = []

somatorio = float(0.)
erro_sem = float()
erro_com = float()

for i in range(0, Entrada):
    for j in range(0, Entrada):   
        lista.append(0.)
        listaespelho.append(0.)
    Matrix.append(lista)
    espelho.append(listaespelho)
    lista = []
    listaespelho = []
    if i == 0:
        matrix_1.append(7.)
        matrix_2.append(7.)
    elif i < Entrada-1:
        matrix_1.append(15.)
        matrix_2.append(15.)
    else:
        matrix_1.append(14.)
        matrix_2.append(14.)
    matrix_3.append(0.)
    matrix_4.append(0.)

for i in range(0, Entrada):
    for j in range(0, Entrada):
        if i == j:
            Matrix[i][j] = 6
            espelho[i][j] = 6
        elif i == j-1:
            Matrix[i][j] = 1
            espelho[i][j] = 1
        elif i == j+1:
            Matrix[i][j] = 8
            espelho[i][j] = 8
        else:
            Matrix[i][j] = 0
            espelho[i][j] = 0

for j in range(0, Entrada):
    for i in range(0, Entrada):
        if j < i:
            if Matrix[i][j] != 0:
                r = Matrix[i][j] / Matrix[j][j]
                for k in range(0, Entrada):
                    Matrix[i][k] = Matrix[i][k] - r*Matrix[j][k]
                matrix_1[i] = matrix_1[i] - r * matrix_1[j]
            if espelho[i][j] != 0:
                if espelho[i][j] > espelho[j][j]:
                    for k in range(0, Entrada):
                        espelho[j][k], espelho[i][k] = espelho[i][k], espelho[j][k]
                    matrix_2[j], matrix_2[i] = matrix_2[i], matrix_2[j]
                r_ = espelho[i][j]/espelho[j][j]
                for k in range(0, Entrada):
                    espelho[i][k] = espelho[i][k] - r_*espelho[j][k]
                matrix_2[i] = matrix_2[i] - r_*matrix_2[j]

j = Entrada-1
while j >= 0:
    matrix_3[j] = matrix_1[j]/Matrix[j][j]
    matrix_4[j] = matrix_2[j]/espelho[j][j]
    i = Entrada-1
    while i > j:
        matrix_3[j] += (-Matrix[j][i])*(matrix_3[i])/(Matrix[j][j])
        matrix_4[j] += (-espelho[j][i])*(matrix_4[i])/(espelho[j][j])
        i -= 1
    j -= 1

for i in range(0, Entrada):
    if matrix_3[i] < 0:
        somatorio += -(matrix_3[i])
    else:
        somatorio += (matrix_3[i])

modular = (Entrada - somatorio)
somatorio = 0

if modular < 0:
    erro_sem = -modular
else:
    erro_sem = modular

for i in range(0, Entrada):
    if matrix_4[i] < 0:
        somatorio += -(matrix_4[i])
    else:
        somatorio += (matrix_4[i])

if (Entrada - somatorio) < 0:  
    erro_com += -(Entrada - somatorio)
else:
    erro_com += (Entrada - somatorio)
print("erro_sem_pivo = ", round(erro_sem,6), "\nerro_com_pivo = ", round(erro_com,6))