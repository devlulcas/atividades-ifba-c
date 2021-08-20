/*
Faça um programa na Linguagem C que receba um número inteiro e que verifique se esse número é
par ou ímpar. O programa deve informar:

a) se o número é par, caso afirmativo informar também se ele é maior que 15;
b) se o número é ímpar, caso afirmativo se ele é menor que 50.
*/

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
  
  if (numero % 2 == 0) {
    printf("PAR");  
    if (numero > 15) {
      printf(" E MAIOR QUE QUINZE");
    }
  } else {
    printf("IMPAR");

    if (numero < 50) {
      printf(" E MENOR QUE 50");
    }
  }

  return(0);
}


