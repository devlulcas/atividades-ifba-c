/*
Desenvolva um programa em C para informar o maior elemento de um vetor de 15 posições do tipo
inteiro.
*/
#include <stdio.h>

int main()
{
    printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
    printf("\tDisciplina: Estrutura de Dados - Turma 732.\n");
    printf("\tProfessor: Djalma A. Lima Filho\n");
    printf("\tAluno(a): Lucas Alves Rego \n\n\n");

    int nums[15] = {6, 2, 3, 4, 5, 10, 9, 8, 7, 6, 15, 14, 13, 11, 12};

    int maior = nums[0];

    for (int cont = 1; cont < 15; cont++)
    {
        if (nums[cont] > maior)
        {
            maior = nums[cont];
        }
    }

    printf("O maior número da lista é %i", maior);
}