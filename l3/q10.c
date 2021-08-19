#include <stdio.h>

int main()
{
  printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
  printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
  printf("\tProfessor: Djalma A. Lima Filho\n");
  printf("\tAluno(a): Lucas Alves Rego \n\n\n");

  int a, b, c;
  a = 10;
  b = 3;
  c = a % b;
  c += 10;
  c --;
  printf("Resultado %d\n", c);
  return(0);
}