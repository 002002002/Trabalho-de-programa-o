# Sistema de verificação de notas de alunos

# Variáveis para contar quantos alunos estão em cada situação
aprovados = 0
recuperacao = 0
reprovados = 0

# Laço que repete 5 vezes (para 5 alunos)
for i in range(5):
    nome = input("Nome do aluno: ")  # Coleta o nome do aluno

    nota1 = float(input("Nota 1: "))  # Coleta a primeira nota (converte para float)
    nota2 = float(input("Nota 2: "))  # Coleta a segunda nota

    media = (nota1 + nota2) / 2  # Calcula a média

    print(f"A média do aluno {nome} é: {media:.2f}")  # Exibe a média com 2 casas decimais

    # Verifica a situação do aluno
    if media >= 7:
        print("✅ Aprovado!")
        aprovados += 1
    elif 5 <= media < 7:
        print("🟦 Recuperação!")
        recuperacao += 1
    else:
        print("❌ Reprovado!")
        reprovados += 1

# Exibe o resumo final
print("\nResumo final:")
print(f"Aprovados: {aprovados}")
print(f"Recuperação: {recuperacao}")
print(f"Reprovados: {reprovados}")
