#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Disciplina: Algoritmos e Programação
// Autor: Vinícius Colombo Sonda

int main()
{
    // Variáveis
    int numeroInteiro;
    unsigned int numeroPositivo;
    float numeroReal;

    // Idioma
    setlocale(LC_ALL, "Portuguese");

    // Entrada
    printf("Digite um número inteiro: ");
    scanf("%d", &numeroInteiro);
    printf("Digite um número inteiro positivo: ");
    scanf("%u", &numeroPositivo);
    printf("Digite um número real: ");
    scanf("%f", &numeroReal);

    // Saída
    printf("Os números digitados foram: %d, %u, %f", numeroInteiro, numeroPositivo, numeroReal);
}
