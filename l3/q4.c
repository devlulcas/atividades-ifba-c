/*
  O professor da disciplina de Estrutura de Dados do Curso Técnico de Informática do IFBA - Campus
Barreiras solicitou aos alunos do curso técnico de Informática do terceiro ano que fizesse um
programa na Linguagem C para auxiliar os alunos de uma escola de nível fundamental para verificar
se um número é divisível por 2. Além disso, o programa deve verificar também se esse número é par
ou ímpar. Portanto, o programa deve ler um número de um usuário e verificar se é divisível por 2 e se
é par ou ímpar.
*/

#include <stdio.h>

int main()
{
  printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
  printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
  printf("\tProfessor: Djalma A. Lima Filho\n");
  printf("\tAluno(a): Lucas Alves Rego \n\n\n");

  int num;
  printf("Digite um número:\n");
  scanf("%d", &num);

  /*
  Zero = False
  Qualquer outro número = True

  (num % 2) == 0 => Indica que num é divisível por dois e porntanto também é par
  (num % 2) != 0 => Indica que num não é divisível por dois, logo é impar.

  Só é possível entrar em um if com uma condição verdadeira.
  Sabendo que (num % 2) == 0 indica ser par e que zero é convertido para false, se quisermos
  verificar se um número é par precisamos inverter o resultado de (num % 2), para que ao invés
  de retornar false quando for par ele retorne true.

  Fazemos isso usando um operador de negação "!".
  */

  if (!(num % 2)) {
    printf("O número %d é divisível por 2... portanto também é par", num);
  }
  else {
    printf("O número %d não é divisível por 2 pois é impar", num);
  }

  return(0);
}