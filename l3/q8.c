#include <stdio.h>


int main()
{
  printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
  printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
  printf("\tProfessor: Djalma A. Lima Filho\n");
  printf("\tAluno(a): Lucas Alves Rego \n\n\n");

  float media_informatica, media_edificacoes, informatica, edificacoes;

  printf("Qual a soma das notas de informática?\n");
  scanf("%f", &informatica);
 
  printf("Qual a soma das notas de edificações?\n");
  scanf("%f", &edificacoes);


  media_informatica = informatica / 26;
  media_edificacoes = edificacoes / 26;

  printf("\nMédias ->\nEdificações: %.2f\nInformática: %.2f\n\n", media_edificacoes, media_informatica);

  if (media_edificacoes == media_informatica) {
    printf("Ambos obtiveram a mesma média.");
  } else if (media_edificacoes > media_informatica) {
    printf("Edificações possui uma média maior.");
  } else {
    printf("Informática possui uma média maior.");
  }
  return(0);
}