#include <stdio.h>

int main()
{
  printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
  printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
  printf("\tProfessor: Djalma A. Lima Filho\n");
  printf("\tAluno(a): Lucas Alves Rego \n\n\n");

  //Código ->
  unsigned int idade_lucas, idade_caique;
  printf("Qual a idade de Lucas?\n");
  scanf("%d", &idade_lucas);
  printf("Qual a idade de Caíque?\n");
  scanf("%d", &idade_caique);
  if (idade_caique == idade_lucas) printf("Ambos possuem a mesma idade\n");
  else if (idade_caique > idade_lucas) printf("Caíque é mais velho que Lucas\n");
  else printf("Lucas é mais velho que Caíque\n");

  return(0);
}


