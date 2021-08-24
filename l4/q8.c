#include <stdio.h>

int main()
{
    printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
    printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
    printf("\tProfessor: Djalma A. Lima Filho\n");
    printf("\tAluno(a): Lucas Alves Rego \n\n\n");
    
    float notas[5], media, soma;
    
    for (int i = 0; i < 5; i++)
    {
        printf("Digite a nota nº%d:\n", i+1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    
    media = soma / 5;
    
    if (media >= 7)
    {
        printf("APROVADO");
    }
    else {
        if (media < 4)
        {
            printf("REPROVADO");
            return (0);
        }
        printf("AINDA HÁ ESPERANÇA, O ALUNO ESTÁ NA PROVA FINAL");
    }
    return(0);
}
