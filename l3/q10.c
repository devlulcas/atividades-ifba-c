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
  c = a % b; // c = 10 % 3 ou seja c = 1
  c += 10; // c += 10 ou seja c = c + 10 ou seja c = 1 + 10 oou seja c = 11
  c --; // c -- ou seja c -= 1 ou seja c = c - 1 ou seja c = 11 - 1 ou seja c = 10
  printf("Resultado %d\n", c); //Resultado 10
  return(0);
}