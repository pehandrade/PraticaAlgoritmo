#include<stdlib.h>
#include<stdio.h>

typedef struct lista Lista;
/*
Função que inicializa a lista atribuindo NULL
Retorna:
    Lista inicializada
*/
Lista* lista_cria(void);

/*
Função que insere elemento inteiro na lista
Argumentos:
    Lista* lista_encadeada
    int valor: valor inteiro a ser inserido
Retorno:
    Nova lista
*/
Lista * insere_elemento(Lista* lista,int numero);

/*
Função que imprime todos elementos da lista encadeada
Argumento:
    Lista * lista_encadeada
*/
void imprime_lista(Lista * lista_encadeada);

/*
Função que verifica se a lista encadeada esta vazia
Argumento:
    Lista * lista_encadeada
*/
int lista_vazia(Lista * lista_encadeada);

/*
Função que recebe um valor informado pelo usuario e busca na lista encadeada
argumentos:
    Lista * lista_encadeada
    Int valor_buscado
Retorna:
    Temp: Caso achar o valor buscado
    NULL: Caso não achar o elemento
*/
Lista * busca_lista(Lista * lista_encadeada,int valor_buscado);

int maior_que_lista(Lista * lista_encadeada,int valor_buscado);

Lista * ultimo(Lista * lista_encadeada);