using System; // Importa funcionalidades básicas como entrada e saída

class Program
{
    static void Main(string[] args)
    {
        // Declaração das variáveis principais
        string nome;
        int nota1, nota2, soma;
        float media;
        int aprovados = 0, recuperacao = 0, reprovados = 0;
        int totalAlunos = 5; // Define o número total de alunos a serem analisados

        // Laço que se repete para cada aluno
        for (int i = 0; i < totalAlunos; i++)
        {
            Console.WriteLine("Nome do aluno:");
            nome = Console.ReadLine(); // Lê o nome do aluno

            Console.WriteLine("Nota 1:");
            nota1 = int.Parse(Console.ReadLine()); // Lê e converte a nota 1

            Console.WriteLine("Nota 2:");
            nota2 = int.Parse(Console.ReadLine()); // Lê e converte a nota 2

            soma = nota1 + nota2;
            media = soma / 2.0f; // Calcula a média como float (com casas decimais)

            // Mostra a média com 2 casas decimais
            Console.WriteLine($"A média do aluno {nome} é: {media:F2}");

            // Verifica a situação do aluno
            if (media >= 7)
            {
                Console.WriteLine("✅ Aprovado!");
                aprovados++;
            }
            else if (media >= 5 && media < 7)
            {
                Console.WriteLine("🟦 Recuperação!");
                recuperacao++;
            }
            else
            {
                Console.WriteLine("❌ Reprovado!");
                reprovados++;
            }
        }

        // Mostra o resumo final
        Console.WriteLine("\nResumo Final:");
        Console.WriteLine($"Aprovados: {aprovados}");
        Console.WriteLine($"Recuperação: {recuperacao}");
        Console.WriteLine($"Reprovados: {reprovados}");
    }
}
