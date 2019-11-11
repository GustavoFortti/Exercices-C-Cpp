#include <stdio.h>
#include <stdlib.h>
#include "ListaSequencial.h"

//algoritimo nao terminado, parei na aula 7 em estrutura de dados descomplicada

struct lista
{
    int qtd;
    struct aluno dados[MAX];
};

int main()
{
    Lista *li;
    li = cria_lista();
    int x;
    //struct lista.aluno dados_aluno;
    //Lista.dados[0].matricula = 1;
    //Lista.dados[0].nome[30] = "AAAAA";
    //Lista.dados[0].n1 = 10;
    //Lista.dados[0].n2 = 10;
    //Lista.dados[0].n3 = 10;

    x = insere_lista_final(li, dados_aluno);

    x = insere_lista_ordenada(li, dados_aluno);
    //x = tamanho_lista(li);

    //x = lista_cheia(li);
    //if (lista_cheia(li))
    

    //x = lista_vazia(Lista* li);
    //if (lista_vazia(li))
    
    libera_lista(li);
    return 0;
}

Lista* cria_lista()
{
    Lista *li;
    li = (Lista*)malloc(sizeof(struct lista)); 
    if (li != NULL)
    {
        li->qtd = 0;
    }
    return li;
}

void libera_lista(Lista* li)
{
    free(li);
}

int tamanho_lista(Lista* li)
{
    if (li == NULL)
    {
        return -1;
    }
    else
    {
        return li->qtd;
    }
}

int lista_cheia(Lista* li)
{
    if (li == NULL)
    {
        return -1;
    }
    return(li->qtd == MAX);
}

int lista_vazia(Lista* li)
{
    if (li == NULL)
    {
        return -1;
    }
    return(li->qtd == 0);
}

int insere_lista_final(Lista* li,struct aluno al)
{
    if (li == NULL)
    {
        return 0;
    }
    if (lista_cheia(li))
    {
        return 0;
    }
    li->dados[li->qtd] = al;
    li->qtd++;
    return 1;
}

int insere_lista_inicio(Lista* li,struct aluno al)
{
    if (li = NULL)
    {
        return 0;
    }
    if (lista_cheia(li))
    {
        return 0;
    }
    int i;
    for (i = li->qtd; i >= 0; i--)
    {
        li->dados[i+1] = li->dados[i];
    }
    li->dados[0] = al;
    li->qtd++;
    return 1;
}

int insere_lista_ordenada(Lista* li,struct aluno al)
{
    if (li == NULL)
    {
        return 0;
    }
    if (lista_cheia(li))
    {
        return 0;
    }
    int k, i = 0;
    while (li < li->qtd && li -> dados[i].matricula < al.matricula)
    {
        i++;
    }
    for (k = li->qtd; k >= i; k--)
    {
        li->dados[k+1] = li->dados[k];
    }
    li->dados[i] = al;
    li->qtd++;
    return 1;
}