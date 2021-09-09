/*
Desenvolva um programa em C que calcule a média das notas de alunos para uma turma de no máximo
100 alunos. O programa deve solicitar como entrada de dados o tamanho da turma. Caso a entrada de
dados seja um valor que ultrapasse o tamanho máximo ou seja um valor negativo o sistema deve reportar
o erro.
*/
#include <stdio.h>
#define MAXALUNOS 100

int main()
{
    printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
    printf("\tDisciplina: Estrutura de Dados - Turma 732.\n");
    printf("\tProfessor: Djalma A. Lima Filho\n");
    printf("\tAluno(a): Lucas Alves Rego \n\n\n");

    float notas[MAXALUNOS], media, soma;
    int qtd_alunos;

    printf("Quantos alunos estudam na turma?\n>>> ");
    scanf("%i", &qtd_alunos);

    if (qtd_alunos > MAXALUNOS)
    {
        printf("Vixe! Cem não dá não.");
        return (0);
    }

    for (int cont = 1; cont <= qtd_alunos; cont++)
    {
        printf("Digite uma nota (%i de %i)\n>>> ", cont, qtd_alunos);
        scanf("%f", &notas[cont - 1]);
        soma += notas[cont - 1];
    }

    media = soma / qtd_alunos;

    printf("\nA média da turma é de %.2f", media);

    return (0);
}