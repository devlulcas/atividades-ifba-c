#include <stdio.h>

int main()
{
  int qtd_docentes, qtd_tecnicos_administrativos, qtd_servidores;

  printf("Digite o número de docentes no Campus:\n");
  scanf("%d", &qtd_docentes);

  printf("Digite o número de técnicos administrativos no Campus:\n");
  scanf("%d", &qtd_tecnicos_administrativos);
  
  qtd_servidores = qtd_docentes + qtd_tecnicos_administrativos;

  printf("Informações sobre o Campus:\n");
  printf("Existem %d servidores no total;\n", qtd_servidores);
  printf("Existem %d docentes\n", qtd_docentes);
  printf("Existem %d técnicos administrativos\n", qtd_tecnicos_administrativos);

  return(0);
}
