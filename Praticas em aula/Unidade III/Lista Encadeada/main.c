#include"lista.c"

int main(void){
    //Criando uma lista encadeada
    Lista *lista_encadeada=cria_lista();
    //Inserindo o valor 3 na lista encadeada
    lista_encadeada=insere_elemento(lista_encadeada,3);
    //Inserindo o valor 2 na lista encadeada
    lista_encadeada=insere_elemento(lista_encadeada,2);
    //Inserindo o valor 1 na lista encadeada
    lista_encadeada=insere_elemento(lista_encadeada,1);
    imprime_lista(lista_encadeada);
    return 0;
}