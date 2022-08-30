from math import cos, exp

A = float(input())
B = float(input())
L = float(input())

def modular(inteiro):
    if inteiro < 0:
        inteiro = -inteiro
        
    return inteiro


def raiz(inteiro):

    return exp(-inteiro**2) - cos(inteiro)

def intervalo(var1, var2):

    a = exp(-var1**2) - cos(var1)
    b = exp(-var2**2) - cos(var2)

    return a - b

if raiz(A) > raiz(B):
        
    x = A
    A = B
    B = x

x = (A * raiz(B) - B * raiz(A))/(intervalo(B, A))

while modular(raiz(x)) > L:
    if raiz(A) * raiz(x) < 0:
        x = (A * raiz(x) - x * raiz(A))/(intervalo(x, A))

    if raiz(B) * raiz(x) <= 0:
        x = (x * raiz(B) - B * raiz(x))/(intervalo(B, x))

if raiz(A)*raiz(B) > 0:
    print("não há raiz neste intervalo")
    exit()

print("%s\n%s"%(str(round(x,7)),str(round(raiz(B)-raiz(A),7))))