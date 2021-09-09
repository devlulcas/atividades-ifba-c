/*
Desenvolva um programa em C que solicite 99 números do tipo inteiro ao usuário e os armazene em um
vetor, depois o programa deverá apresentar na tela os números na ordem inversa do qual foram digitados.
*/

#include <stdio.h>
#define TAM_VET 99
int main()
{
    printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
    printf("\tDisciplina: Estrutura de Dados - Turma 732.\n");
    printf("\tProfessor: Djalma A. Lima Filho\n");
    printf("\tAluno(a): Lucas Alves Rego \n\n\n");

    int nums[TAM_VET];

    for (int cont = 0; cont < TAM_VET; cont++)
    {
        printf("Digite um número:\n>>> ");
        scanf("%i", &nums[cont]);
    }

    printf("\n\nAgora ao contrário:\n");
    for (int cont = TAM_VET - 1; cont >= 0; cont--)
    {
        printf("%i > ", nums[cont]); //0, 1, 2 , 3 , 4 = 5
    }

    return (0);
}