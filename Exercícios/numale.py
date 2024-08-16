print('Bem vindo ao jogo de adivinhação de número!')
tentativas = 0
import random
numero = random.randint(1,100)

while True:
    chute = input('Digite um número de 1 a 100: ')
    tentativas += 1
    chute = int(chute)
    if chute:
        print('oba')
    else:
        print('nao oba')