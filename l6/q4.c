/*
Desenvolva um programa em C que leia 99 números do tipo inteiro do usuário. Separe esses números em
pares e ímpares e os armazenem em dois outros vetores chamados vet_par e vet_impar. Em seguida, o
programa dever apresentar os resultados na tela.
*/

#include <stdio.h>
#define TAM_VET 99

int main()
{
    printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
    printf("\tDisciplina: Estrutura de Dados - Turma 732.\n");
    printf("\tProfessor: Djalma A. Lima Filho\n");
    printf("\tAluno(a): Lucas Alves Rego \n\n\n");

    //Vetores
    int nums[TAM_VET], vet_par[TAM_VET], vet_impar[TAM_VET];
    //Contadores
    int cont_par = 0, cont_impar = 0;

    //Leitura dos números
    for (int cont = 0; cont < TAM_VET; cont++)
    {
        printf("Digite um número:\n>>> ");
        scanf("%i", &nums[cont]);

        if (nums[cont] % 2 == 0)
        {
            vet_par[cont_par] = nums[cont];
            cont_par++;
        }
        else
        {
            vet_impar[cont_impar] = nums[cont];
            cont_impar++;
        }
    }

    printf("\nNúmeros pares > ");
    for (int cont = 0; cont < cont_par; cont++)
    {
        printf("%i > ", vet_par[cont]);
    }

    printf("\nNúmeros impares > ");
    for (int cont = 0; cont < cont_impar; cont++)
    {
        printf("%i > ", vet_impar[cont]);
    }

    return (0);
}