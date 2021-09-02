/*
Faça um programa em C que leia vários números inteiros e apresente o fatorial de cada número. O algoritmo encerra quando se digita um número menor do que 1. 
*/

#include <stdio.h>
#include <stdlib.h>
#define TRUE 1

double fatorial(int num)
{
  if (num == 0)
  {
    return 1;
  }
  return num * fatorial(num - 1);
}

int main()
{
  printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
  printf("\tDisciplina: Estrutura de Dados - Turma 732.\n");
  printf("\tProfessor: Djalma A. Lima Filho\n");
  printf("\tPrimeira Avaliação da Disciplina\n");
  printf("\tAlunos: Lucas Alves Rego\n\n");

  // CÓDIGO
  int num;
  double fat;

  while (TRUE)
  {
    printf("Digite um número inteiro:\n> ");
    scanf("%d", &num);
    if (num == 1)
      break;
    fat = fatorial(num);
    printf("O fatorial de %d é %g\n\n", num, fat);
  }

  return (0);
}