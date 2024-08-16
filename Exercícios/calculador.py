while True:
    num1 = input('Digite um número: ')
    num2 = input('\nDigite outro número: ')
    op = input('\nDigite a operação desejada: (+ - x /): ')

   
    op_valido = ['+', '-', 'x', '/']

    if num1.isdigit() and num2.isdigit() and op in op_valido:
        num1 = int(num1)
        num2 = int(num2)
        if op == '+':
            print(f'\n{num1} + {num2} = {num1 + num2}\n')
        elif op == '-':
            print(f'\n{num1} - {num2} = {num1 - num2}\n')
        elif op == 'x':
            print(f'\n{num1} x {num2} = {num1 * num2}\n')
        elif op == '/':
            print(f'\n{num1} / {num2} = {num1 / num2}\n')
        else:
            break
    else: 
        print('Erro! Digite números e operações válidas na operação!\n')

    sair = input('Deseja sair da calculadora? [s] [n]').lower().startswith('s')

    if sair is True:
        break