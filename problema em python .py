#código escrito em linguagem python
aprovados = 0
recuperacao = 0
reprovados = 0

#estrutura de repetição
for i in range(1, 6):
    # lendo o nome e notas
    nome = input(f"Digite o nome do aluno {i}: ")
    nota1 = float(input("Digite a primeira nota: "))
    nota2 = float(input("Digite a segunda nota: "))
    
    media = (nota1 + nota2) / 2  # calculando média

    # verificando situação
    if media >= 7:
        print(f"{nome} foi aprovado.")
        aprovados += 1
    elif media >= 5:
        print(f"{nome} está em recuperação.")
        recuperacao += 1
    else:
        print(f"{nome} foi reprovado.")
        reprovados += 1

# exibindo os totais
print("\nTotal de aprovados:", aprovados)
print("Total de recuperação:", recuperacao)
print("Total de reprovados:", reprovados)
