#include <stdio.h>

int main()
{
  printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
  printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
  printf("\tProfessor: Djalma A. Lima Filho\n");
  printf("\tAluno(a): Lucas Alves Rego \n\n\n");

  int informatica, edificacoes, alimentos, total;

  printf("Digite a quantidade de alunos matriculados em informática:\n");
  scanf("%d", &informatica);
  
  printf("Digite a quantidade de alunos matriculados em alimentos:\n");
  scanf("%d", &alimentos);

  printf("Digite a quantidade de alunos matriculados em edificações:\n");
  scanf("%d", &edificacoes);

  total = informatica + edificacoes + alimentos;
  printf("Total de alunos = %d\n", total);
  
  if (informatica == edificacoes && edificacoes == alimentos ) {
    printf("Todos possuem a mesma quantidade de estudantes");
    return 0;
  }

  if (edificacoes > informatica && edificacoes > alimentos) {
    printf("Edificações é o curso com mais estudantes, possuindo %d estudantes", edificacoes); 
  }
  else if ( alimentos > informatica && alimentos > edificacoes) {
    printf("Alimentos é o curso com mais estudantes, possuindo %d estudantes", alimentos); 
  }
  else {
    printf("Informática é o curso com mais estudantes, possuindo %d estudantes", informatica); 
  }
  return(0);
}