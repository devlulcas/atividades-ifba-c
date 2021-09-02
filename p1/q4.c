/*
Faça um programa em C que calcule quantos litros de gasolina são usados em uma viagem, sabendo que um carro faz 10 km/litro. O usuário fornecerá a velocidade do carro e o período de tempo que viaja nesta velocidade para cada trecho do percurso. Então, usando as fórmulas distância = tempo x velocidade e litros consumidos = distância / 10, o programa computará, para todos os valores não negativos de velocidade, os litros de combustível consumidos. O programa deveráimprimir a distância e o número de litros de combustível gastos naquele trecho.Deverá imprimir também o total de litros gastos na viagem. O programa encerraquando o usuário informar um valor negativo de velocidade. *
*/

#include <stdio.h>
#include <stdlib.h>
#define KM_LITRO 10
#define TRUE 1

int main()
{
  printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
  printf("\tDisciplina: Estrutura de Dados - Turma 732.\n");
  printf("\tProfessor: Djalma A. Lima Filho\n");
  printf("\tPrimeira Avaliação da Disciplina\n");
  printf("\tAlunos: Lucas Alves Rego\n\n");

  // CÓDIGO
  float velocidade, tempo_periodo, gasosa_periodo, gasosa_total, distancia;

  while (TRUE)
  {
    printf("Qual a velocidade do veículo?\n> ");
    scanf("%f", &velocidade);

    if (velocidade < 0)
    {
      break;
    }

    printf("Por quanto tempo viajou com essa velocidade?\n> ");
    scanf("%f", &tempo_periodo);

    distancia = tempo_periodo * velocidade;
    gasosa_periodo = distancia / KM_LITRO;
    printf("Foram percorridos %.2fkms e foram consumidos %.2f litros de gasolina\n", distancia, gasosa_periodo);

    gasosa_total += gasosa_periodo;
  }

  printf("\nForam consumidos %.2f litros de gasolina no total\n", gasosa_total);
  return (0);
}