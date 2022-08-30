import math

def P0(x):
    return 7816.273180*(1 - math.exp(-0.0011752387*x))

def P1(x):
    return 1.617067*math.exp(1.153090*x)

def P2(x):
    return 6.550502 + 18.313747*math.log(x)

def P3(x):
    return 104.912790*math.exp(-3.483633/x)

x = []
fx = []
M = float(0)
SQT = [0, 0, 0, 0]
SQR = [0, 0, 0, 0]
R = []
Ordem = [0, 1, 2, 3]

for i in range (0, 5):

    a = float(input())
    x.append(a)

for i in range (0, 5):
    a = float(input())
    fx.append(a)
    M += fx[i]/5

for i in range (0, 5):
    SQT[0] += (P0(x[i]) - M)**2
    SQT[1] += (P1(x[i]) - M)**2
    SQT[2] += (P2(x[i]) - M)**2
    SQT[3] += (P3(x[i]) - M)**2
    SQR[0] += (P0(x[i]) - fx[i])**2
    SQR[1] += (P1(x[i]) - fx[i])**2
    SQR[2] += (P2(x[i]) - fx[i])**2
    SQR[3] += (P3(x[i]) - fx[i])**2

for i in range (0, 4):
    R.append(1 - SQR[i]/(SQR[i] + SQT[i]))
i = 0
while i < 3:
    j = i+1
    i += 1
    while j < 4:
        if R[i-1] < R[j]:
            R[i-1], R[j] = R[j], R[i-1]
            Ordem[i-1], Ordem[j] = Ordem[j], Ordem[i-1]
            i = 0
            break
        else:
            j += 1

for i in range (0, 4):
    print('P{0:d} R^2 = {1:f}'.format(Ordem[i], round(R[i], 6)))