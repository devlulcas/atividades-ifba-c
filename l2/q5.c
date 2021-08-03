#include <stdio.h>

int main()
{
  int informatica, edificacoes, alimentos, total;

  printf("Digite a quantidade de alunos matriculados em informática:\n");
  scanf("%d", &informatica);
  
  printf("Digite a quantidade de alunos matriculados em alimentos:\n");
  scanf("%d", &alimentos);

  printf("Digite a quantidade de alunos matriculados em edificações:\n");
  scanf("%d", &edificacoes);

  total = informatica + edificacoes + alimentos;

  printf("Alunos matriculados:\n");
  printf("Total: %d\n", total);
  printf("Informática + Edificações: %d\n", informatica + edificacoes);
  printf("Informática + Alimentos: %d\n", informatica + alimentos);
  printf("Edificações + Alimentos: %d\n",edificacoes + alimentos);
  printf("Informática: %d\n", informatica);
  printf("Alimentos: %d\n", alimentos);
  printf("Edificações: %d",edificacoes);

  return(0);
}
