// Código exemplo em C++ 

#include <iostream>
using namespace std;

int main() {
    string nome;
    float nota1, nota2, media;
    int aprovados = 0, recuperacao = 0, reprovados = 0;
//estrutura de repetição
    for (int i = 1; i <= 5; i++) {
        // pedindo os dados do aluno
        cout << "Digite o nome do aluno " << i << ": ";
        cin >> nome;

        cout << "Digite a primeira nota: ";
        cin >> nota1;

        cout << "Digite a segunda nota: ";
        cin >> nota2;

        media = (nota1 + nota2) / 2; // cálculo da média

        // verificando a situação do aluno
        if (media >= 7) {
            cout << nome << " foi aprovado.\n";
            aprovados++;
        } else if (media >= 5 && media < 7) {
            cout << nome << " está em recuperação.\n";
            recuperacao++;
        } else {
            cout << nome << " foi reprovado.\n";
            reprovados++;
        }
    }

    // exibindo os totais
    cout << "\nTotal de aprovados: " << aprovados << endl;
    cout << "Total de recuperação: " << recuperacao << endl;
    cout << "Total de reprovados: " << reprovados << endl;

    return 0;
}

