import math

def taylor(k):

    return (-1)**k * x**(2*k) / math.factorial(2*k)

def cos(x, n):

    cosx = 0

    for k in range(n):
        cosx += taylor(k)

    return cosx

x = float(input(""))
n = 50

print(cos(x, n))
