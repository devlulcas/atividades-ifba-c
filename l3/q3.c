/*
  Desenvolva um programa em C que lê as 5 notas de um aluno da disciplina de Estrutura de Dados
(ED) do curso técnico de Informática do IFBA - Campus Barreiras devendo calcular a média. O
programa deve imprimir a média e verificar se a média desse aluno(a) é maior ou igual a sete, se for
o programa deve emitir a seguinte mensagem: “Aluno(a) Aprovado na disciplina de ED!”. Se a média
é menor que sete deve emitir a mensagem “Aluno(a) reprovado na disciplina ED!”. Se a média está
entre 4 (maior ou igual) e 7 (menor que) o sistema deve emitir a mensagem “Aluno(a) em prova final
da disciplina ED!”.
*/

#include <stdio.h>

int main()
{
  printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
  printf("\tDisciplina: Estrutura de Dados - Turma 732.\n");
  printf("\tProfessor: Djalma A. Lima Filho\n");
  printf("\tAluno(a): Lucas Alves Rego \n\n\n");

  //Ler 5 notas
  //Nota 1 = 5.6

  //float nota0, nota1, nota2, nota3, nota4; // CINCO VARIÁVEIS
  float nota[5], media, soma;

  for (int contador = 0; contador < 5; contador++ ) {
    printf("Digite a nota %d do aluno:\n", contador);
    scanf("%f", &nota[contador]);

    soma += nota[contador]; // 10 + 8 + 9 + 10 + 0
  }

  media = soma / 5;

  printf("A média do aluno foi: %.2f\n", media);

  // media >= 7 => PASSOU
  // media < 7 => REPROVOU
  // 4 >= media < 7 => PROVA FINAL

  if (media >= 7) {
    printf("PASSOU");
  }
  else {
    printf("REPROVOU\n");
    if (media >= 4) {
      printf("VOCÊ ESTÁ NA PROVA FINAL");
    }
  }

  return (0);
}
