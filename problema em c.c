/*
Sistema de verificação de notas de alunos

Um sistema precisa verificar as notas de 5 alunos. Para cada aluno, o sistema deve:

- Solicitar o nome do aluno.🧑🏻‍🎓
- Solicitar duas notas.📝
- Calcular a média.➗

 Verificar:

- Se a média for maior ou igual a 7, o aluno está aprovado.✅
- Se estiver entre 5 e 6.9, está em recuperação.🟦
- Se for menor que 5, está reprovado.❌

O sistema deve exibir o nome do aluno e o resultado da avaliação. Ao final,
exibir quantos alunos foram aprovados, quantos em recuperação e quantos reprovados.

*/

#include <stdio.h>

int main() {
    int aluno=5;
    char nome [20];
    int nota1;
    int nota2;
    float media;
    int soma;
    int aprovados=0,recuperacao=0,reprovados=0;

    for(int i=0;i<aluno;i++){
        printf("Nome do aluno:\n");
        scanf("%s",nome);

        printf("Nota 1:\n");
        scanf("%i",&nota1);

        printf("Nota 2:\n");
        scanf("%i",&nota2);

         soma= nota1+nota2;
         media=soma/2.0;

         printf("A media da nota do aluno %s e %.2f.\n",nome,media);

          if(media>=7){
        printf("Aprovado!\n");
        aprovados++; //contar quantos foram reprovados
     }
    else if(media>=5 && media<=6.9){
        printf("Recuperacao!\n");
        recuperacao++;
     }
    else{
        printf("Reprovado!\n");
        reprovados++;
     }
    }
//contagem da situação do aluno
printf("\nSituacao:\n");
printf("Aprovados:%i\n",aprovados);
printf("Recuperacao:%i\n",recuperacao);
printf("Reprovado:%i\n",reprovados);

    return 0;
}
