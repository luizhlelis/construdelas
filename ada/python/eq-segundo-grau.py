"""
Faça um programa que calcule as raízes de uma equação do segundo grau, na forma ax2 + bx + c. O programa deverá pedir os valores de a, b e c e fazer as consistências, informando ao usuário nas seguintes situações:
Se o usuário informar o valor de A igual a zero, a equação não é do segundo grau e o programa não deve pedir os demais valores, sendo encerrado;
Se o delta calculado for negativo, a equação não possui raizes reais. Informe ao usuário e encerre o programa;
Se o delta calculado for igual a zero a equação possui apenas uma raiz real; informe-a ao usuário;
Se o delta for positivo, a equação possui duas raiz reais; informe-as ao usuário;
delta = b^2 - 4ac
raiz = -b +/- raiz de delta dividido por 2a
"""

import math

valor_a = int(input('Digite o valor do A: '))

if valor_a == 0:
    print('A equação não é do segundo grau')
    exit()

valor_b = int(input('Digite o valor do B: '))
valor_c = int(input('Digite o valor do C: '))

delta = (valor_b**2-(4*valor_a*valor_c))

if delta < 0:
    print('A equação não possui raizes reais.')
    exit()
if delta == 0:
    raiz1 = ((-valor_b)+math.sqrt(delta))/(2*valor_a)
    print(f'A equação possui apenas uma raiz: {raiz1}')
if delta > 0:
    raiz1 = ((-valor_b)+math.sqrt(delta))/(2*valor_a)
    raiz2 = ((-valor_b)-math.sqrt(delta))/(2*valor_a)
    print(f'A equação possui duas raizes: {raiz1} e {raiz2}')