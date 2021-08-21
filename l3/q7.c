/*
  Desenvolva um programa em C que auxilie o IFBA - Campus Barreiras em relação a quantidade de
alunos nos cursos técnicos de Informática e Edificações. O programa deve informar qual curso possui
mais alunos e qual a quantidade total de alunos. Além disso, caso os cursos tenham a mesma
quantidade de alunos, o programa deve emitir uma mensagem informando que ambos os cursos têm
a mesma quantidade e apresentar essa quantidade. Por fim, caso algum curso não tenha nenhum
aluno matriculado o programa deve informar que não existe alunos matriculados no curso.
*/

#include <stdio.h>

int main()
{
  printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
  printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
  printf("\tProfessor: Djalma A. Lima Filho\n");
  printf("\tAluno(a): Lucas Alves Rego \n\n\n");

  int informatica, edificacoes, total;

  printf("Digite a quantidade de alunos matriculados em informática:\n");
  scanf("%d", &informatica);

  printf("Digite a quantidade de alunos matriculados em edificações:\n");
  scanf("%d", &edificacoes);

  total = informatica + edificacoes;
  
  printf("Alunos em informática = %d\n", informatica);
  printf("Alunos em edificações = %d\n", edificacoes);
  

  if (informatica == edificacoes) {
    printf("Todos possuem a mesma quantidade de estudantes = %d", total);
    return 0;
  }
  

  if (edificacoes > informatica) {
    printf("Edificações é o curso com mais estudantes, possuindo %d estudantes", edificacoes); 
  } else if (edificacoes < informatica) {
    printf("Informática é o curso com mais estudantes, possuindo %d estudantes", informatica); 
  }


  if (!informatica) {
    printf("Não existem alunos matrículados no curso de informática!\n");
  }
  
  if (!edificacoes) {
    printf("Não existem alunos matrículados no curso de edificações!\n");
  }


  return(0);
}