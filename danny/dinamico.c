#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// Estruturas

typedef struct {
    char Nome[30];
    int Idade;
} Pessoa;

struct ItemDaListaEncadeada {
    Pessoa dado;
    struct ItemDaListaEncadeada *proximo;
};

typedef struct ItemDaListaEncadeada Item;

typedef struct {
    int tamanhoDaLista;
    Item *head;
} Lista;

void CriarLista(Lista *L){
    L = malloc(sizeof(Lista));
    L->tamanhoDaLista = 0;
    L->head = NULL;
}

void InserePrimeiroItemDaLista(Lista *L, Pessoa novaPessoa){
    Item *p;
    p = malloc(sizeof(Item));
    p->dado = novaPessoa;
    p->proximo = NULL;
    L->head = p;
    L->tamanhoDaLista++;
}

void InsereItemNoInicioDaLista(Lista *L, Pessoa novaPessoa){
    Item *p;
    p = malloc(sizeof(Item));
    p->dado = novaPessoa;
    p->proximo = L->head;
    L->head = p;
    L->tamanhoDaLista++;
}

void InsereItemNoFinalDaLista(Lista *L, Pessoa novaPessoa){
    Item *p;
    p = malloc(sizeof(Item));
    p->dado = novaPessoa;
    p->proximo = L->head;
    L->head = p;
    L->tamanhoDaLista++;
}

void RemoveItemNoInicioDaLista(Lista *L){
    if (L->head == NULL){
        printf("Lista vazia\n");
        return;
    }
    Item *p = L->head;
    L->head = p->proximo;
    free(p);
    L->tamanhoDaLista--;
}

void ImprimeElemento(Pessoa t){
    printf("{ Nome: %s, Idade: %i }\n", t.Nome, t.Idade);
}

void ImprimeLista(Lista *L){
    Item *p;
    p = L->head;
    printf("Lista de pessoas:\n");
    while (p != NULL){
        ImprimeElemento(p->dado);
        p = p->proximo;
    }
    printf("\n");
}

int main(int argc, char **argv){

    Lista minhaLista;
    CriarLista(&minhaLista);

    Pessoa pessoa1 = {"Daniel", 20};
    Pessoa pessoa2 = {"João", 24};
    Pessoa pessoa3 = {"Maria", 18};

    InserePrimeiroItemDaLista(&minhaLista, pessoa1);
    ImprimeLista(&minhaLista);
    InsereItemNoInicioDaLista(&minhaLista, pessoa2);
    ImprimeLista(&minhaLista);
    InsereItemNoFinalDaLista(&minhaLista, pessoa3);
    ImprimeLista(&minhaLista);

    RemoveItemNoInicioDaLista(&minhaLista);
    ImprimeLista(&minhaLista);

    return 0;
}
