#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Disciplina: Algoritmos e Programa��o
// Autor: Vin�cius Colombo Sonda

int main()
{
    // Vari�veis
    char letra;
    int numero;

    // Idioma
    setlocale(LC_ALL, "Portuguese");

    // Entrada
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    printf("Digite um n�mero: ");
    scanf("%d", &numero);

    // Sa�da
    printf("A letra digitada foi %c e o n�mero digitado foi %d", letra, numero);
}
