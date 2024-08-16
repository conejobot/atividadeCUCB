num = input('Digite um número inteiro: ')

if num.isdigit():
    num = int(num)

    if num % 2 == 0:
        print('Este número é par!')
    else:
        print('Este número é ímpar!')

else: 
    print('Erro! Digite um número!')

