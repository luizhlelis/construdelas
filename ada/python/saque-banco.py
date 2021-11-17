# Faça um Programa para um caixa eletrônico. O programa deverá perguntar ao usuário a valor do saque e depois informar quantas notas de cada valor serão fornecidas.
# As notas disponíveis serão as de 1, 5, 10, 50 e 100 reais. O valor mínimo é de 10 reais e o máximo de 600 reais. O programa não deve se preocupar com a quantidade
# de notas existentes na máquina.

# Exemplo 1: Para sacar a quantia de 256 reais, o programa fornece duas notas de 100, uma nota de 50, uma nota de 5 e uma nota de 1;
# Exemplo 2: Para sacar a quantia de 399 reais, o programa fornece três notas de 100, uma nota de 50, quatro notas de 10, uma nota de 5 e quatro notas de 1.

valorDoSaque = int(float(input("Digite o valor do saque: ")))

if valorDoSaque >= 10 and valorDoSaque <= 600:
    nota100 = valorDoSaque/100
    nota50 = (valorDoSaque%100)/50
    nota10 = ((valorDoSaque%100)%50)/10
    nota5 = ((valorDoSaque%100)%10)/5
    nota1 = ((valorDoSaque%100)%5)/1
    print(f"Para sacar a quantia de {valorDoSaque} reais, o programa fornece {int(nota100)} notas de 100, {int(nota50)} nota de 50, {int(nota10)} nota de 10, {int(nota5)} nota de 5 e {int(nota1)} nota de 1")
else:
    print('Digite um valor valido!')