#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 15

int main()
{
    srand(time(NULL));
    int v[size];
    int i, cont = 0, aux;
    for ( i = 0; i < size; i++)
    {
        v[i] = rand() % 3;
    }

    for ( i = 0; i < size; i++)
    {
        while ( v[i + cont] == 0)
        {
            cont++;
            while ( v[i + cont] != 0 && (cont + i) < size)
            {
                v[i] = v[i + cont];
                i++;
            }
        }
    }

    for ( i = 0; i < size - cont; i++)
    {
        printf("%i ", v[i]);
    }
    printf("\n");
}