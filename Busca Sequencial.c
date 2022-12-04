/* ALGORITMO DE BUSCA SEQUENCIAL*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARA��O DE VARI�VEIS */

    int vet[10] = {2,4,1,6,4,3,7,9,4,1};               /* Lista de elementos no Vetor */
    int n = 10;                                        /* Numero de elementos no Vetor */
    int buscar;                                        /* Numero que o usuario deseja buscar */
    int resp [n];                                      /* Resposta ao usu�rio */
    int p = 0;                                         /* Indicador de posi��o do Vetor resp */
    int i;                                             /* Contador no la�o For */

    printf ("Informe o numero que deseja buscar:");    /* Pergunta ao usu�rio */
    scanf ("%d", &buscar);

    for (i=0; i<= n-1; i++)                            /* Algoritmo de Busca */
    {
        if (vet[i] == buscar)
        {
            resp [p] = i;
            p = p+ 1;
        }
    }

if (p > 0)
{
    for (i=0; i<= p-1; i++)                            /* Loop */
    {

       printf ("%d\t", resp [i]);                      /* Mostrar o n�mero que est� no Vetor resp, posi��o i */
    }
}
 else                                                  /* Se nenhum n�mero foi encontrado */
 {
     printf ("Numero nao encontrado");
 }

    return 0;
}
