/*
  Desenvolva um programa na Linguagem C para comparar a idade dos alunos Caíque e Lucas. O
programa deve informar quem é o mais velho. O programa deve receber como dados de entrada:
idade de Caíque e Lucas (tipo das variáveis: inteiro, e valor em anos). Caso, esses alunos apresente
a mesma idade o programa deve emitir uma mensagem informando.
*/

#include <stdio.h>

int main()
{
  printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
  printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
  printf("\tProfessor: Djalma A. Lima Filho\n");
  printf("\tAluno(a): Lucas Alves Rego \n\n\n");

  //Código ->
  unsigned int idade_lucas, idade_caique; //Unsigned int = Inteiro sem sinal = Inteiro positivo
  
  printf("Qual a idade de Lucas?\n"); 
  scanf("%d", &idade_lucas);

  printf("Qual a idade de Caíque?\n");
  scanf("%d", &idade_caique);
  
  //Ifs curtos 
  if (idade_caique == idade_lucas) printf("Ambos possuem a mesma idade\n");
  else if (idade_caique > idade_lucas) printf("Caíque é mais velho que Lucas\n");
  else printf("Lucas é mais velho que Caíque\n");

  return(0);
}


