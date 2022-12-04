/* ALGORITMO DE BUSCA SEQUENCIAL*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARAÇÃO DE VARIÁVEIS */

    int vet[10] = {2,4,1,6,4,3,7,9,4,1};               /* Lista de elementos no Vetor */
    int n = 10;                                        /* Numero de elementos no Vetor */
    int buscar;                                        /* Numero que o usuario deseja buscar */
    int resp [n];                                      /* Resposta ao usuário */
    int p = 0;                                         /* Indicador de posição do Vetor resp */
    int i;                                             /* Contador no laço For */

    printf ("Informe o numero que deseja buscar:");    /* Pergunta ao usuário */
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

       printf ("%d\t", resp [i]);                      /* Mostrar o número que está no Vetor resp, posição i */
    }
}
 else                                                  /* Se nenhum número foi encontrado */
 {
     printf ("Numero nao encontrado");
 }

    return 0;
}
