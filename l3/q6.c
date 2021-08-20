/*
  Desenvolva um programa em C que auxilie o IFBA - Campus Barreiras a verificar a validade de uma
senha [6 dígitos] do sistema SUAP fornecida pelo usuário. A senha válida é o número 918273. Devem
ser impressas as seguintes mensagens no programa: ACESSO PERMITIDO AO USUÁRIO, caso a
senha seja válida. ACESSO NEGADO AO USÚARIO, caso a senha seja inválida
*/

#include <stdio.h>

int main()
{
  printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
  printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
  printf("\tProfessor: Djalma A. Lima Filho\n");
  printf("\tAluno(a): Lucas Alves Rego \n\n\n");


  int pswd;
  int valid_pswd = 918273;

  printf("Qual a senha?\n");
  scanf("%d", &pswd);

  //IF ternário => (condição) ? executa_caso_verdadeiro : executa_caso_falso;
  //Obs: não é indicado aninhar ifs ternários pois torna a interpretação mais complicada.
  (pswd == valid_pswd) ? printf("ACESSO PERMITIDO AO USUÁRIO") : printf("ACESSO NEGADO AO USUÁRIO");
  
  return(0);
}