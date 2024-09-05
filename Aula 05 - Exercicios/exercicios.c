#include <stdio.h>
#include <stdlib.h>

int primeiroExercicio()
{
    int primeiroNumero, segundoNumero;

    printf("Digite o primeiro numero :");
    scanf("%d" , &primeiroNumero);

    printf("Digite o segundo numero :");
    scanf("%d" , &segundoNumero);

    if (primeiroNumero > segundoNumero)
    {
        printf("O segundo numero deve ser maior que o primeiro");
    }else
    {
        while (primeiroNumero != segundoNumero)
        {
            printf("Numero: %d\n", primeiroNumero +=1);
        }
    }
}

int segundoExercicio()
{
    int primeiroNumero, segundoNumero;

    printf("Digite o primeiro numero :");
    scanf("%d" , &primeiroNumero);

    printf("Digite o segundo numero :");
    scanf("%d" , &segundoNumero);

    if (primeiroNumero > segundoNumero)
    {
        printf("O segundo numero deve ser maior que o primeiro");
    }else
    {
        do
        {
            printf("Numero: %d\n", primeiroNumero +=1);
        } while (primeiroNumero != segundoNumero);
    }
}

int terceiroExercicio()
{
    int primeiroNumero, segundoNumero;

    printf("Digite o primeiro numero :");
    scanf("%d" , &primeiroNumero);

    printf("Digite o segundo numero :");
    scanf("%d" , &segundoNumero);
    
    if (primeiroNumero > segundoNumero)
    {
        printf("O segundo numero deve ser maior que o primeiro");
    }else
    {
        for (int i = primeiroNumero; i <= segundoNumero; i++)
        {
            printf("Numero: %d\n", i);
        }
    }
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