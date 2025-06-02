// Importa a classe Scanner para ler entradas do teclado
import java.util.Scanner;

public class VerificacaoNotas {
    public static void main(String[] args) {
        // Cria o scanner para entrada de dados
        Scanner input = new Scanner(System.in);

        // Variáveis para contar alunos em cada situação
        int aprovados = 0;
        int recuperacao = 0;
        int reprovados = 0;

        // Repetição para 5 alunos
        for (int i = 0; i < 5; i++) {
            // Coleta nome do aluno
            System.out.print("Nome do aluno: ");
            String nome = input.next();

            // Coleta as duas notas
            System.out.print("Nota 1: ");
            double nota1 = input.nextDouble();

            System.out.print("Nota 2: ");
            double nota2 = input.nextDouble();

            // Calcula a média
            double media = (nota1 + nota2) / 2;

            // Mostra a média formatada com duas casas decimais
            System.out.printf("A média do aluno %s é: %.2f\n", nome, media);

            // Verifica a situação
            if (media >= 7) {
                System.out.println("✅ Aprovado!");
                aprovados++;
            } else if (media >= 5 && media < 7) {
                System.out.println("🟦 Recuperação!");
                recuperacao++;
            } else {
                System.out.println("❌ Reprovado!");
                reprovados++;
            }
        }

        // Mostra o resumo final
        System.out.println("\nResumo final:");
        System.out.println("Aprovados: " + aprovados);
        System.out.println("Recuperação: " + recuperacao);
        System.out.println("Reprovados: " + reprovados);

        // Fecha o scanner
        input.close();
    }
}
