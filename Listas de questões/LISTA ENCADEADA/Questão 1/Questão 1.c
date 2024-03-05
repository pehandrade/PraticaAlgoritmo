#include"lista.c"

/*
1) Considere listas encadeadas de valores inteiros e implemente uma função para
retornar o número de nós da lista que possuem o campo info com valores
maiores do que n. Essa função deve obedecer ao protótipo: int maiores(Lista* l,
int n);
*/

int main(void){
    int valor_busca;
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
    printf("Informe o valor");
    scanf("%d",&valor_busca);
    int count;
    count=maior_que_lista(lista_encadeada,valor_busca);
    printf("%d",count);
}