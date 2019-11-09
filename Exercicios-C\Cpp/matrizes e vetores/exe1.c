/*
39. Escreva um programa que leia um numero inteiro positivo ´ n e em seguida imprima n
linhas do chamado Triangulo de Pascal:
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
...
*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, size = 0;
    scanf("%i", &size);
    int v1[size+2], v2[size+2];
    //int *a =(int*)calloc(size,sizeof(int));
    //int *aa =(int*)calloc(size,sizeof(int));
    for (i = 0; i < size; i++)
    {
        v1[i] = 0;
        v2[i] = 0;
    }
    //aa[1] = 1; 
    v2[1] = 1;
    printf("\n");
    for( i = 0; i < size+1; i++)
    {
        for( j = 1; j < i+1; j++)
        {
            //a[j] = aa[j-1] + aa[j];
            //printf(" %i + %i = %i --", aa[j-1], aa[j], a[j]);
            //printf(" %i   %i   i = %i <<",j-1, j, i);
            v1[j] = v2[j-1] + v2[j];
            printf(" %i ", v1[j]);
        }   
        printf("\n");
        for ( j = 1; j < i+1; j++)
        {
            //a[j] = aa[j];
            v2[j] = v1[j];
        }
    }
    return 0;
}
