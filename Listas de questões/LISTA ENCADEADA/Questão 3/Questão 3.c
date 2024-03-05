#include"lista.c"

/*
Implemente uma função que receba duas listas encadeadas de valores reais e
retorne a lista resultante da concatenação das duas listas recebidas como
parâmetros, isto é, após a concatenação, o último elemento da primeira lista
deve apontar para o primeiro elemento da segunda lista, conforme ilustrado a
seguir:
Essa função deve obedecer ao protótipo: Lista* contatena(Lista* l1, Lista* l2);
*/

int main(void){
    Lista *lista_encadeada1=cria_lista();
    lista_encadeada1=insere_elemento(lista_encadeada1,1.0);
    lista_encadeada1=insere_elemento(lista_encadeada1,2.0);
    lista_encadeada1=insere_elemento(lista_encadeada1,3.0);
    lista_encadeada1=insere_elemento(lista_encadeada1,4.0);
    lista_encadeada1=insere_elemento(lista_encadeada1,5.0);
    lista_encadeada1=insere_elemento(lista_encadeada1,6.0);
    lista_encadeada1=insere_elemento(lista_encadeada1,7.0);
    lista_encadeada1=insere_elemento(lista_encadeada1,8.0);
    lista_encadeada1=insere_elemento(lista_encadeada1,9.0);
    lista_encadeada1=insere_elemento(lista_encadeada1,10.0);
    Lista *lista_encadeada2=cria_lista();
    lista_encadeada2=insere_elemento(lista_encadeada2,11.0);
    lista_encadeada2=insere_elemento(lista_encadeada2,12.0);
    lista_encadeada2=insere_elemento(lista_encadeada2,13.0);
    lista_encadeada2=insere_elemento(lista_encadeada2,14.0);
    lista_encadeada2=insere_elemento(lista_encadeada2,15.0);
    lista_encadeada2=insere_elemento(lista_encadeada2,16.0);
    lista_encadeada2=insere_elemento(lista_encadeada2,17.0);
    lista_encadeada2=insere_elemento(lista_encadeada2,18.0);
    lista_encadeada2=insere_elemento(lista_encadeada2,19.0);
    lista_encadeada2=insere_elemento(lista_encadeada2,20.0);

    Lista *lista_final=contatena(lista_encadeada1,lista_encadeada2);
    imprime_lista(lista_final);
}