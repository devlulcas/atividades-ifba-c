/*
Faça um programa em C que apresente o seguinte menu: (1 - Uber Promo, 2 - Uber PromoX 3 - Uber VIP e 4 - Sair). O programa deve ler de entrada do usuário o valor de uma corrida de uma empresa de aplicativo UBER. Para calcular o valor da corrida é necessário saber a distância percorrida em quilômetros e qual o tipo do UBER da corrida, (Promo, PromoX ou VIP). Caso o tipo seja Promo, o preço do quilometro percorrido é de R$ 1,60, se for PromoX o valor é de R$ 2,60, caso seja VIP o valor é R$ 3,60. Caso usuário degite uma das opções inválidas o programa deve emitir a seguinte mensagem: "OPÇÃO INVÁLIDA! DIGITE O TIPO DE UBER QUE DESEJA: <1 - Promo, 2-PromoX ou 3 - VIP>. Por fim, caso o usuário deseje sair do programa uma quarta opção no menu está disponível.
*/

#include <stdio.h>
#include <stdlib.h>

#define PROMO 1.6
#define PROMOX 2.6
#define VIP 3.6
#define TRUE 1

int main()
{
  printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
  printf("\tDisciplina: Estrutura de Dados - Turma 732.\n");
  printf("\tProfessor: Djalma A. Lima Filho\n");
  printf("\tPrimeira Avaliação da Disciplina\n");
  printf("\tAlunos: Lucas Alves Rego\n\n");

  // CÓDIGO
  int opt;
  float ubers[3] = {PROMO, PROMOX, VIP};
  float custo_total, km;

  while (TRUE)
  {
    printf("(1) - Uber Promo\n(2) - Uber PromoX\n(3) - Uber VIP\n(4) - Sair\n> ");
    scanf("%d", &opt);

    if (opt == 4)
    {
      break;
    }

    if (opt > 4 || opt <= 0)
    {
      printf("\nOPÇÃO INVÁLIDA! DIGITE O TIPO DE UBER QUE DESEJA: <1 - Promo, 2-PromoX ou 3 - VIP\n");
    }

    printf("\nQuantos km foram percorridos?\n> ");
    scanf("%f", &km);

    custo_total = ubers[opt - 1] * km;

    printf("\nO custo da viagem é de %.2f reais\n\n", custo_total);
  }
  return (0);
}