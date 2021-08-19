#include <stdio.h>

int main()
{
  printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
  printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
  printf("\tProfessor: Djalma A. Lima Filho\n");
  printf("\tAluno(a): Lucas Alves Rego \n\n\n");

  int numero;
  printf("Digite um número:\n");
  scanf("%d", &numero);

  (numero % 5) ? printf("Não é divisível por 5") : printf("É divisível por 5");

  return(0);
}