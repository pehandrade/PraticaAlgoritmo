#include<stdlib.h>
#include<stdio.h>

typedef struct lista Lista;

Lista* cria_lista(void);

Lista * insere_elemento(Lista* lista,float numero);

Lista* contatena(Lista* l1, Lista* l2);

void imprime_lista(Lista * lista_encadeada);