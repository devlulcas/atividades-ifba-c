#include <stdio.h>

int main()
{
  printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
  printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
  printf("\tProfessor: Djalma A. Lima Filho\n");
  printf("\tAluno(a): Lucas Alves Rego \n\n\n");


  int pswd;
  int valid_pswd = 918273;

  printf("Qual a senha?\n");
  scanf("%d", &pswd);

  (pswd == valid_pswd) ? printf("ACESSO PERMITIDO AO USUÁRIO") : printf("ACESSO NEGADO AO USUÁRIO");
  
  return(0);
}