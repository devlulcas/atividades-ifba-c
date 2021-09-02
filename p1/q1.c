/*
Dado um país A, com 5 milhões de habitantes e uma taxa de natalidade de 3% ao ano, e um país B com 7 milhões de habitantes e uma taxa de natalidade de 2% ao ano, faça um programa em C que calcule e imprima o tempo necessário para que a população do país A ultrapasse a população do país B. 
*/

#include <stdio.h>

int main()
{
  printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
  printf("\tDisciplina: Estrutura de Dados - Turma 732.\n");
  printf("\tProfessor: Djalma A. Lima Filho\n");
  printf("\tPrimeira Avaliação da Disciplina\n");
  printf("\tAlunos: Lucas Alves Rego\n\n");

  // CÓDIGO
  int anos = 0;
  int pop_a = 5000000;
  int pop_b = 7000000;
  float natalidade_a = 0.03; // 3 / 100
  float natalidade_b = 0.02; // 2 / 100

  while (pop_a <= pop_b)
  {
    pop_a += pop_a * natalidade_a;
    pop_b += pop_b * natalidade_b;
    anos++;
  }

  printf("País A tem uma população maior que a de país B depois de %d anos.\n", anos);
  return (0);
}