#include <stdio.h>

int main()
{
  printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
  printf("\tDisciplina: Estrutura de Dados - Turma 732.\n");
  printf("\tProfessor: Djalma A. Lima Filho\n");
  printf("\tAluno(a): Lucas Alves Rego \n\n\n");

  float notas[5];
  float media = 0;

  printf("Digite a nota I:\n");
  scanf("%f", &notas[0]);

  printf("Digite a nota II:\n");
  scanf("%f", &notas[1]);

  printf("Digite a nota III:\n");
  scanf("%f", &notas[2]);

  printf("Digite a nota IV:\n");
  scanf("%f", &notas[3]);

  printf("Digite a nota V:\n");
  scanf("%f", &notas[4]);

  for (int i = 0; i < 5; i++)
  {
    media += notas[i];
  }

  media /= 5;

  printf("Sua média foi de %.2f pontos\n", media);
  if (media >= 7)
  {
    printf("Aluno(a) Aprovado na disciplina de ED!\n");
  }
  else if (media >= 4 && media < 7)
  {
    printf("Aluno(a) em prova final da disciplina ED!");
  }
  else
  {
    printf("Aluno(a) reprovado na disciplina ED!");
  }

  return (0);
}
