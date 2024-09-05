#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Disciplina: Algoritmos e Programa��o
// Autor: Vin�cius Colombo Sonda

int main()
{
    // Vari�veis
    char aluno[50], disciplina[50];
    char questao1, questao2, questao3;

    // Idioma
    setlocale(LC_ALL, "Portuguese");

    // Entrada
    printf("Nome do Aluno: ");
    scanf("%s", &aluno);
    printf("Nome da Disciplina: ");
    scanf("%s", &disciplina);
    printf("Quest�o 1: 2x3 � igual a?\n A) 3\n B) 6\n C) 4\n D) 8\n E) 12\nResposta: ");
    scanf(" %c", &questao1);
    printf("Quest�o 2: 4+4 � igual a?\n A) 16\n B) 4\n C) 8\n D) 12\n E) 20\nResposta: ");
    scanf(" %c", &questao2);
    printf("Quest�o 3: 8-3 � igual a?\n A) -3\n B) 4\n C) -5\n D) 13\n E) 5\nResposta: ");
    scanf(" %c", &questao3);

    // Saida
    printf("Respostas de %s na disciplina %s\nQuest�o 1: %c\nQuest�o 2: %c\nQuest�o 3: %c", aluno, disciplina, questao1, questao2, questao3);
}
