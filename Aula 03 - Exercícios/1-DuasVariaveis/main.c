#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Disciplina: Algoritmos e Programação
// Autor: Vinícius Colombo Sonda

int main()
{
    // Variáveis
    char letra;
    int numero;

    // Idioma
    setlocale(LC_ALL, "Portuguese");

    // Entrada
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    printf("Digite um número: ");
    scanf("%d", &numero);

    // Saída
    printf("A letra digitada foi %c e o número digitado foi %d", letra, numero);
}
