#include <stdio.h>

int main() {
    char nome[50]; // vetor para guardar o nome do aluno
    float nota1, nota2, media; // variáveis para as notas e a média
    int aprovados = 0, recuperacao = 0, reprovados = 0; // contadores dos resultados

    // repete o processo para 5 alunos
    //estrutura de repetição 
    for(int i = 1; i <= 5; i++) {
        printf("Digite o nome do aluno %d:\n", i);
        scanf("%s", nome); // pega o nome

        printf("Digite a primeira nota de %s:\n", nome);
        scanf("%f", &nota1); // pega a nota 1

        printf("Digite a segunda nota de %s:\n", nome);
        scanf("%f", &nota2); // pega a nota 2

        media = (nota1 + nota2) / 2; // calcula a média

        // verifica a situação do aluno com if/else 
        if(media >= 7) {
            printf("%s foi aprovado!\n\n", nome);
            aprovados++; // soma um no contador de aprovados
        }
        else if(media >= 5) {
            printf("%s está em recuperação.\n\n", nome);
            recuperacao++; // soma um no contador de recuperação
        }
        else {
            printf("%s foi reprovado.\n\n", nome);
            reprovados++; // soma um no contador de reprovados
        }
    }

    // mostra o resumo final
    printf("Resumo final:\n");
    printf("Aprovados: %d\n", aprovados);
    printf("Recuperacao: %d\n", recuperacao);
    printf("Reprovados: %d\n", reprovados);

    return 0;
}
