h = input('Digite a hora agora: ')

if h.isdigit():
    h = int(h)
    if 11 >= h >= 0:
        print('Bom dia!')
    elif 17 >= h >= 12:
        print('Boa tarde!')
    elif 23 >= h >= 18:
        print('Boa noite!')
    else:
        print('Erro! Digite um horário válido! (0-24)')
else:
    print('Erro! Digite um número!')
