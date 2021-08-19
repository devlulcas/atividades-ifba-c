#include <stdio.h>

int main()
{
  printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
  printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
  printf("\tProfessor: Djalma A. Lima Filho\n");
  printf("\tAluno(a): Lucas Alves Rego \n\n\n");
  /*
  Desenvolva um programa em C que auxilie o IFBA - Campus Barreiras em relação a quantidade de
  alunas e alunos no curso técnico integrado de Informática. 
  
  Depois esse programa deve informar se
  essa turma possui mais alunos ou mais alunas. 
  
  Se essa turma possuir a quantidade de alunos maior
  que a de alunas, informe o total de alunos dessa turma. 
  
  Além disso, o programa deve verificar se a
  quantidade de alunos é igual a de alunas.
  */

  int infogirls, infoboys, total;

  printf("Digite a quantidade de garotos no curso de informática:\n");
  scanf("%d", &infoboys);
  printf("Digite a quantidade de garotas no curso de informática:\n");
  scanf("%d", &infogirls);

  if (infoboys == infogirls) {
    printf("Proporções iguais de garotos e garotas!");
  }
  else if (infogirls > infoboys) {
    printf("Garotas são a maioria!");
  }
  else {
    total = infoboys + infoboys;
    printf("Garotos são a maioria!\n");
    printf("Existem %d alunos na turma, %d são garotos e %d são garotas", total, infoboys, infogirls);
  }
  return(0);
}