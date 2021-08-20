/*
  O professor da disciplina de Estrutura de Dados do Curso Técnico de Informática do IFBA - Campus
Barreiras solicitou aos alunos do curso técnico de Informática do terceiro ano que fizesse um
programa na Linguagem C para auxiliar os alunos de uma escola de nível fundamental para verificar
se um número é divisível por 5. O programa deve ler um número de um usuário e verificar se é divisível
por 5.
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

  (numero % 5) ? printf("Não é divisível por 5") : printf("É divisível por 5");

  return(0);
}