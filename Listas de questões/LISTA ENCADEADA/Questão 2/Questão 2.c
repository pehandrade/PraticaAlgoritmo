#include"lista.c"

/*
2) Implemente uma função que tenha como valor de retorno o ponteiro para o
último nó de uma lista encadeada. Essa função deve obedecer ao protótipo:
Lista* ultimo(Lista* l);
*/

int main(void){
    Lista *lista_encadeada=cria_lista();
    lista_encadeada=insere_elemento(lista_encadeada,1);
    lista_encadeada=insere_elemento(lista_encadeada,2);
    lista_encadeada=insere_elemento(lista_encadeada,3);
    lista_encadeada=insere_elemento(lista_encadeada,4);
    lista_encadeada=insere_elemento(lista_encadeada,5);
    lista_encadeada=insere_elemento(lista_encadeada,6);
    lista_encadeada=insere_elemento(lista_encadeada,7);
    lista_encadeada=insere_elemento(lista_encadeada,8);
    lista_encadeada=insere_elemento(lista_encadeada,9);
    Lista * ultimo_no=ultimo(lista_encadeada);
    printf("%d",ultimo_no->info);
    
}