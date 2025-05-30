// Código escrito em linguagem C#
// Problema: Ler o nome e as notas de 5 alunos, calcular a média e informar se foram aprovados, estão em recuperação ou reprovados.
using System;

class Program {
    static void Main() {
        string nome;
        float nota1, nota2, media;
        int aprovados = 0, recuperacao = 0, reprovados = 0;

        //estrutura de repetição 
        for (int i = 1; i <= 5; i++)
        {
            // lendo os dados do aluno
            Console.WriteLine($"Digite o nome do aluno {i}:");
            nome = Console.ReadLine();

            Console.WriteLine("Digite a primeira nota:");
            nota1 = float.Parse(Console.ReadLine());

            Console.WriteLine("Digite a segunda nota:");
            nota2 = float.Parse(Console.ReadLine());

            media = (nota1 + nota2) / 2;

            // verificando situação
            if (media >= 7)
            {
                Console.WriteLine($"{nome} foi aprovado.");
                aprovados++;
            }
            else if (media >= 5)
            {
                Console.WriteLine($"{nome} está em recuperação.");
                recuperacao++;
            }
            else
            {
                Console.WriteLine($"{nome} foi reprovado.");
                reprovados++;
            }
        }

        // resultados finais
        Console.WriteLine($"\nTotal de aprovados: {aprovados}");
        Console.WriteLine($"Total de recuperação: {recuperacao}");
        Console.WriteLine($"Total de reprovados: {reprovados}");
    }
}
