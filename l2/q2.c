#include <stdio.h>

int main()
{
  int qtd_alunos, qtd_alunas;
  //ALUNOS
  printf("Digite o número de alunos na sala:\n");
  scanf("%d", &qtd_alunos);
  //ALUNAS
  printf("Digite o número de alunas na sala:\n");
  scanf("%d", &qtd_alunas);

  //ALUNAS -> ALUNOS
  printf("Existem %d alunas e %d alunos nessa sala\n", qtd_alunas, qtd_alunos);
  return(0);
}
