#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Disciplina: Algoritmos e Programa��o
// Autor: Vin�cius Colombo Sonda

int main()
{
    // Vari�veis
    char nomeFilho[25];
    char sobrenomePai[25];
    char sobrenomeMae[25];

    // Idioma
    setlocale(LC_ALL, "Portuguese");

    // Entrada
    printf("Digite o nome do filho: ");
    scanf(" %s", &nomeFilho);
    printf("Digite o sobrenome do pai: ");
    scanf(" %s", &sobrenomePai);
    printf("Digite o sobrenome da m�e: ");
    scanf(" %s", &sobrenomeMae);

    // Sa�da
    printf("O nome completo do filho � %s %s %s", nomeFilho, sobrenomeMae, sobrenomePai);
}
