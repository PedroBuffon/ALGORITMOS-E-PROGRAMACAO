#include <stdio.h>
#include <stdlib.h>

int primeiroExercicio()
{
    int primeiroNumero, segundoNumero;

    printf("Digite o primeiro numero :");
    scanf("%d" , &primeiroNumero);

    printf("Digite o segundo numero :");
    scanf("%d" , &segundoNumero);

    if (&primeiroNumero > &segundoNumero)
    {
        printf("O primeiro numero e maior que o segundo numero \n" );
    }else
    {
        printf("O primeiro numero e menor que o segundo numero \n");
    }
}

int segundoExercicio()
{
    float altura, base, area;

    printf("Digite a altura :");
    scanf("%f" , &altura);

    printf("Digite a base :");
    scanf("%f" , &base);

    area = (altura * base) / 2;

    printf("A area do triangulo e de: %.2f\n", area);
}

int terceiroExercicio()
{
        // Vari�veis
    char aluno[50], disciplina[50], questao1, questao2, questao3;
    int respostas;
    // Entrada
    printf("Nome do Aluno: ");
    scanf("%s", &aluno);
    printf("Nome da Disciplina: ");
    scanf("%s", &disciplina);
    printf("Questao 1: 2x3 e igual a?\n A) 3\n B) 6\n C) 4\n D) 8\n E) 12\nResposta: ");
    scanf(" %c", &questao1);
    printf("Questao 2: 4+4 e igual a?\n A) 16\n B) 4\n C) 8\n D) 12\n E) 20\nResposta: ");
    scanf(" %c", &questao2);
    printf("Questao 3: 8-3 e igual a?\n A) -3\n B) 4\n C) -5\n D) 13\n E) 5\nResposta: ");
    scanf(" %c", &questao3);

    respostas = 0;

    if (questao1 == 'b'){
        respostas += 1;
    }
    if (questao2 == 'c'){
        respostas += 1;
    }
    if (questao3 == 'e'){
        respostas += 1;
    }

    // Saida
    printf("Respostas de %s na disciplina %s\nQuestao 1: %c\nQuestao 2: %c\nQuestao 3: %c", aluno, disciplina, questao1, questao2, questao3, "\n");

    printf("Voce respondeu corretamente: %d questoes \n", respostas);
}

int quartoExercicio()
{
    int primeiroNumero, segundoNumero, resultado, funcao;

    printf("Digite o primeiro numero :");
    scanf("%d" , &primeiroNumero);

    printf("Digite o segundo numero :");
    scanf("%d" , &segundoNumero);

    printf("Selecione a funcao \n 1) +\n 2) -\n 3) *\n 4) / \n");
    scanf("%d" , &funcao);

    switch (funcao)
    {
    case 1:
        resultado = primeiroNumero + segundoNumero;
        printf("Resultado: %d\n", resultado);
        break;

    case 2:
        resultado = primeiroNumero - segundoNumero;
        printf("Resultado: %d\n", resultado);
        break;
    
    case 3:
        resultado = primeiroNumero * segundoNumero;
        printf("Resultado: %d\n", resultado);
        break;

    case 4:
        resultado = primeiroNumero / segundoNumero;
        printf("Resultado: %d\n", resultado);
        break;

    default:
        break;
    }
}

int main()
{
    int exercicio;

    printf("Digite o numero do exercicio :");
    scanf("%d" , &exercicio);

    switch (exercicio)
    {
    case 1:
        primeiroExercicio();
        break;

    case 2:
        segundoExercicio();
        break;
    
    case 3:
        terceiroExercicio();
        break;

    case 4:
        quartoExercicio();
        break;

    default:
        break;
    }
}