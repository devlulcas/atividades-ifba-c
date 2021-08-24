#include <stdio.h>
int main()
{
    printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
    printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
    printf("\tProfessor: Djalma A. Lima Filho\n");
    printf("\tAluno(a): Lucas Alves Rego \n\n\n");
    
    int bandeira;
    float bandeira1, bandeira2, custo, km;
    bandeira1 = 1.8;
    bandeira2 = 2.3;
    
    printf("QUILOMETROS VIAJADOS:\n");
    scanf("%f", &km);
    printf("BANDEIRA UTILIZADA:\n");
    scanf("%d", &bandeira);
    
    if (bandeira == 1)
    {
        custo = bandeira1 * km;
    } 
    else if (bandeira == 2)
    {
        custo = bandeira2 * km;    
    }
  
    if (custo < 3.5) custo = 3.5;
    
    printf("CUSTO FINAL: %.2f", custo);
    
    return(0);
}