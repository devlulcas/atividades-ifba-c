/*
Faça um Programa em C que apresente o seguinte menu de opções: (1 - Curso de Informática 2 - Curso de Edificações-3 - Curso de Alimentos e 4 - Curso de Enfermagem e 5 - Sair) disponíveis para os usuários escolherem e fazerem suas inscrições no vestibular do IFBA - Campus Barreiras. Ao final da inscrição, o programa deve apresentar a quantidade de inscritos por cada curso e a quantidade total de inscrições. Para os usuários finalizarem suas inscrições, o programa dispõe de uma quinta opção para finalizar a inscrição. Por fim, se o usuário digitar uma opção que não seja as opções definidas, o programa deve emitir a seguinte mensagem: "OPÇÃO INVÁLIDA. DIGITE UMA DAS SEGUINTES OPÇÕES <1-2-3-4-5>."
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
  printf("\tDisciplina: Estrutura de Dados - Turma 732.\n");
  printf("\tProfessor: Djalma A. Lima Filho\n");
  printf("\tPrimeira Avaliação da Disciplina\n");
  printf("\tAlunos: Lucas Alves Rego\n\n");

  // CÓDIGO
  int opcao, soma, informatica = 0, edificacoes = 0, alimentos = 0, enfermagem = 0;

  while (!0)
  {
    printf("\nEscolha um curso:\n(1) - Curso de Informática\n(2) - Curso de Edificações\n(3) - Curso de Alimentos\n(4) - Curso de Enfermagem\n(5) - Sair\n>>> ");
    scanf("%d", &opcao);

    //para que default se podemos fazer de um jeito muito menos prático :D
    if (opcao <= 0 || opcao > 5)
    {
      printf("\nOPÇÃO INVÁLIDA. DIGITE UMA DAS SEGUINTES OPÇÕES <1-2-3-4-5>.\n");
    }

    if (opcao == 5)
    {
      break;
    }

    switch (opcao)
    {
    case 1:
      informatica++;
      break;
    case 2:
      edificacoes++;
      break;
    case 3:
      alimentos++;
      break;
    case 4:
      enfermagem++;
      break;
    }
  }
  soma = informatica + edificacoes + alimentos + enfermagem;
  printf("| INFORMÁTICA | EDIFICAÇÕES | ALIMENTOS | ENFERMAGEM |\n");
  printf("|     %d      |      %d     |     %d    |     %d     |\n", informatica, edificacoes, alimentos, enfermagem);
  printf("| TOTAL: %d |\n", soma);

  return (0);
}