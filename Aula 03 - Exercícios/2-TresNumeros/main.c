#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Disciplina: Algoritmos e Programa��o
// Autor: Vin�cius Colombo Sonda

int main()
{
    // Vari�veis
    int numeroInteiro;
    unsigned int numeroPositivo;
    float numeroReal;

    // Idioma
    setlocale(LC_ALL, "Portuguese");

    // Entrada
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numeroInteiro);
    printf("Digite um n�mero inteiro positivo: ");
    scanf("%u", &numeroPositivo);
    printf("Digite um n�mero real: ");
    scanf("%f", &numeroReal);

    // Sa�da
    printf("Os n�meros digitados foram: %d, %u, %f", numeroInteiro, numeroPositivo, numeroReal);
}
