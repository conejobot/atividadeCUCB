nome = input('Digite seu nome: ')
tam = len(nome) 
if nome.isalpha():
    if tam < 4:
        print('Que nome curto!')
    elif tam <= 5 or tam <= 6:
        print('Que nome normal!')
    else: 
        print('Que nome grande!')
else: 
    print('Erro! Digite um nome!')
    