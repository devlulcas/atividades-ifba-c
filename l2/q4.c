#include <stdio.h>

int main()
{
  int n_casos_suspeitos, n_casos_confirmados, n_mortes, n_casos_ativos;

  printf("Número de casos suspeitos:\n");
  scanf("%d", &n_casos_suspeitos);

  printf("Número de casos confirmados:\n");
  scanf("%d", &n_casos_confirmados);


  printf("Número de mortes:\n");
  scanf("%d", &n_mortes);

  n_casos_ativos = n_casos_suspeitos + n_casos_confirmados;
  
  printf("A quantidade de casos ativos na cidade de Barreiras atualmente é de %d (%d casos suspeitos + %d casos confirmados)\n", n_casos_ativos, n_casos_suspeitos, n_casos_confirmados);
  printf("Total de mortos: %d", n_mortes);
  
  return(0);
}
