// código escrito em linguagem Java
import java.util.Scanner;

public class VerificacaoNotas {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String nome;
        float nota1, nota2, media;
        int aprovados = 0, recuperacao = 0, reprovados = 0;

//estrutura de repetição
        for (int i = 1; i <= 5; i++) {
            // lendo os dados do aluno
            System.out.println("Digite o nome do aluno " + i + ":");
            nome = input.next();

            System.out.println("Digite a primeira nota:");
            nota1 = input.nextFloat();

            System.out.println("Digite a segunda nota:");
            nota2 = input.nextFloat();

            media = (nota1 + nota2) / 2;

            // verificando a situação do aluno
            if (media >= 7) {
                System.out.println(nome + " foi aprovado.");
                aprovados++;
            } else if (media >= 5) {
                System.out.println(nome + " está em recuperação.");
                recuperacao++;
            } else {
                System.out.println(nome + " foi reprovado.");
                reprovados++;
            }
        }

        // exibindo os resultados finais
        System.out.println("\nTotal de aprovados: " + aprovados);
        System.out.println("Total de recuperação: " + recuperacao);
        System.out.println("Total de reprovados: " + reprovados);

        input.close();
    }
}
