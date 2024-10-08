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
            printf("Numero: %d\n", primeiroNumero);
            primeiroNumero +=1;
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
            printf("Numero: %d\n", primeiroNumero);
            primeiroNumero +=1;
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
        for (primeiroNumero; primeiroNumero != segundoNumero; primeiroNumero++)
        {
            printf("Numero: %d\n", primeiroNumero);
        }
    }
}

int quartoExercicio() {
    int primeiroNumero, segundoNumero, resultado, funcao;
    char continuar = 'S';

    while (continuar == 'S' || continuar == 's') {
        printf("Digite o primeiro numero: ");
        scanf("%d", &primeiroNumero);

        printf("Digite o segundo numero: ");
        scanf("%d", &segundoNumero);

        printf("Selecione a funcao\n 1) +\n 2) -\n 3) *\n 4) /\n");
        scanf("%d", &funcao);

        switch (funcao) {
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
                if (segundoNumero != 0) {
                    resultado = primeiroNumero / segundoNumero;
                    printf("Resultado: %d\n", resultado);
                } else {
                    printf("Erro: Divisao por zero nao permitida.\n");
                }
                break;

            default:
                printf("Operacao invalida.\n");
                break;
        }

        printf("Deseja realizar outra operacao? (S/N): ");
        scanf(" %c", &continuar);
    }

    printf("Programa encerrado.\n");
    return 0;
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