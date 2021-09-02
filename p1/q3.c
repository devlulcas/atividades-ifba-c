/*
Faça um programa em C para informar o valor de uma corrida de taxi que considere o valor mínimo da corrida. Ou seja, ao entrar no taxi, o cliente deve pagar um valor mínimo de R$ 3,50, mesmo que o tamanho da corrida seja inferior a esse valor. Para calcular o valor da corrida é necessário saber a distância percorrida em quilômetros e qual o tipo da bandeira da corrida, 1, 2 e 3. Caso a bandeira seja 1, o preço do quilometro percorrido é de R$ 1,80, se a bandeira for 2 o valor é de R$ 2,30 e caso a bandeira for 3 o valor é de R$ 3,00. O programa ajudará a companhia de Taxi a ter suas corridas registrados no sistema da companhia. 
*/

#include <stdio.h>
#include <stdlib.h>
#define TARIFA_MINIMA 3.5
#define BANDEIRA1 1.8
#define BANDEIRA2 2.3
#define BANDEIRA3 3.0

int main()
{
  printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
  printf("\tDisciplina: Estrutura de Dados - Turma 732.\n");
  printf("\tProfessor: Djalma A. Lima Filho\n");
  printf("\tPrimeira Avaliação da Disciplina\n");
  printf("\tAlunos: Lucas Alves Rego\n\n");

  // CÓDIGO
  float custo_total, km;
  float bandeiras[3] = {BANDEIRA1, BANDEIRA2, BANDEIRA3};
  int bandeira_cliente;

  printf("Qual a bandeira utilizada?\n> ");
  scanf("%d", &bandeira_cliente);

  printf("Quantos km foram percorridos?\n> ");
  scanf("%f", &km);

  custo_total = bandeiras[bandeira_cliente - 1] * km;

  if (custo_total < TARIFA_MINIMA)
  {
    custo_total = TARIFA_MINIMA;
  }

  printf("\nO custo da viagem é de %.2f reais\n", custo_total);

  return (0);
}