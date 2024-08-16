palavra = 'abacaxi'
tentativas = 0
incorreto = 0
burras = 0
amostra = '_' * len(palavra)
print('Bem vindo ao jogo de adivinhação!\n')

while True:
    chute = input('Digite uma letra: ')
    tentativas += 1
    if len(chute) == 1 and chute.isalpha() and chute.isupper and chute.islower:
        if chute in palavra:
            nova = list(amostra)
            for i, letra in enumerate(palavra):
                if chute == letra:
                    nova[i] = chute
            amostra = ''.join(nova)  
            print(amostra)
            if '_' not in amostra:
                break
        else:
            print("A letra não está na palavra. Tente novamente.")
            incorreto += 1

    elif len(chute) != 1 and chute.isalpha():
        burras +=1
        print('Erro! Digite apenas uma letra.')
    elif chute.isdigit():
        burras +=1
        print('Erro! Apenas caracteres de letras disponíveis!')
    else:
        burras +=1
        print('Inválido! Vazio ou caracteres especiais não contam!')

print('\nParabéns! Você acertou!\n')
print(f'Número de tentativas: {tentativas}')
print(f'Número de tentativas incorreta: {incorreto}')
print(f'Número de tentativas burras: {burras}')