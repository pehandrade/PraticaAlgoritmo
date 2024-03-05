#include"lista.h"

struct lista{
    int info;
    Lista *proximo_elemento;
};

Lista* cria_lista(void){
    return NULL;
};

Lista * insere_elemento(Lista* lista,int numero){
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

void imprime_lista(Lista * lista_encadeada){
    Lista * contador;
    for(contador=lista_encadeada;contador!=NULL;contador=contador->proximo_elemento){
        printf("%d\t",contador->info);
    }
}

int lista_vazia(Lista * lista_encadeada){
    if(lista_encadeada){
        return 1;
    }
    return 0;
}

Lista * busca_lista(Lista * lista_encadeada,int valor_buscado){
    Lista * temp;
    for(temp=lista_encadeada;temp != NULL; temp = temp->proximo_elemento){
        if(temp->info==valor_buscado){
            return temp;
        }
    }
    return NULL;
}

int maior_que_lista(Lista * lista_encadeada,int valor_buscado){
    Lista * temp;
    int count=0;
    for(temp=lista_encadeada;temp != NULL; temp = temp->proximo_elemento){
        if(temp->info>=valor_buscado){
            count++;
        }
    }
    return count;
}

Lista * ultimo(Lista * lista_encadeada){
    Lista * temp;
    for(temp=lista_encadeada;temp != NULL; temp = temp->proximo_elemento){
        if(temp->proximo_elemento==NULL){
            return temp;
        }
    }
    return NULL;
}