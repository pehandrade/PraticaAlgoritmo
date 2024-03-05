#include"lista.h"

struct lista{
    float info;
    Lista *proximo_elemento;
};

Lista* cria_lista(void){
    return NULL;
};

Lista * insere_elemento(Lista* lista,float numero){
    //Aloca novo nó da lista encadeada
    Lista * novo_no=(Lista*)malloc(sizeof(Lista));
    if(novo_no==NULL){
        exit(1);
    }
    //Adiciona o valor informado pelo usuário no campo info
    novo_no->info=numero;
    //Conecta o novo nó a lista
    novo_no->proximo_elemento=lista;
    return novo_no;
}

Lista* contatena(Lista* l1, Lista* l2){
    
    Lista * temp;
    for(temp=l1;temp != NULL; temp = temp->proximo_elemento){
        if(temp->proximo_elemento==NULL){
            temp->proximo_elemento=l2;
        }
    }
    return temp;
}

void imprime_lista(Lista * lista_encadeada){
    Lista * contador;
    for(contador=lista_encadeada;contador!=NULL;contador=contador->proximo_elemento){
        printf("%f\t",contador->info);
    }
}