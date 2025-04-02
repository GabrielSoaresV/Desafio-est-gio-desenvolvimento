# Biblioteca
import random

def jogar_adivinhacao():
    
    numero = random.randint(1, 100) # Gera um número aleatório entre 1 e 100
    tentativas = 0  # Contador de tentativas
    palpite = -1  # Da um valor inválido para a variavel

    print("Tente adivinhar o número entre 1 e 100!")

    # Loop de tentativas
    while tentativas < 10:
        while True:
            try:
                palpite = int(input("Digite seu palpite: "))
                break 
            except ValueError: # Se ocorrer um erro, solicita um novo palpite
                print("Por favor, digite um número válido.")

        tentativas += 1  # Inicia o contador de tentativas

        if palpite == numero:
            print("Parabéns, você acertou!")
            break
        # Se o palpite for menor que o número, dá uma dica
        if palpite < numero:
            print("Muito baixo!")
        # Se o palpite for maior que o número, dá outra dica
        elif palpite > numero:
            print("Muito alto!")
        # Se o palpite for muito próximo do número, dá um aviso
        elif abs(palpite - numero) <= 3:
            print("Passou perto!")

    # Se o jogador não acertou dentro das tentativas ele perdeu
    if palpite != numero:
        print(f"Você perdeu! O número era {numero}.")

        # Pergunta ao jogador se ele deseja reiniciar
        reiniciar = input("Deseja tentar novamente? (s/n): ").strip().lower()

        if reiniciar == "s":
            jogar_adivinhacao()
        elif reiniciar == "n":
            print("Obrigado por jogar! Até mais.")
        else:
            print("Opção inválida! O jogo será encerrado.")
            return  

jogar_adivinhacao()
