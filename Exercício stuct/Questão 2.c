#include<stdio.h>
#include<stdlib.h>

typedef struct Pessoa{
    char nome[100];
    int n_documento;
    int idade;
}Pessoa;

void preencher_dados(Pessoa * dados_pessoa){
    printf("Informe seu nome: \n");
    scanf(" %[^\n]s",&dados_pessoa->nome);
    printf("Informe o numero de seu documento: \n");
    scanf("%d",&dados_pessoa->n_documento);
    printf("Informe sua idade: \n");
    scanf("%d",&dados_pessoa->idade);
}

void imprimir(Pessoa * dados_pessoa){
    printf("Nome: %s \n Nunero documento: %d \n Idade: %d \n",dados_pessoa->nome,dados_pessoa->n_documento,dados_pessoa->idade);
}

void trocar_idade(Pessoa * dados_pessoa, int nova_idade){
    dados_pessoa->idade=nova_idade;
}

void pessoa_velha_nova(Pessoa * dados_pessoa, int quantidade_pessoas){
    struct Pessoa mais_velha=dados_pessoa[0];
    struct Pessoa mais_nova=dados_pessoa[0];
    int contador;
    for(contador=0;contador<quantidade_pessoas;contador++){
        if(dados_pessoa[contador].idade>mais_velha.idade){
            mais_velha=dados_pessoa[contador];
        }
        if(dados_pessoa[contador].idade<mais_nova.idade){

            mais_nova=dados_pessoa[contador];
        }
    }

    printf("Pessoa mais velha: \n Nome: %s \n",mais_velha.nome);
    printf("Pessoa mais nova: \n Nome: %s \n",mais_nova.nome);
    
}

int main(void){
    int quantidade_pessoas;
    printf("Informe a quantidade de pessoas: \n");
    scanf("%d", &quantidade_pessoas);

    Pessoa * dados_pessoa = (Pessoa*) malloc(quantidade_pessoas*sizeof(Pessoa));

    int contador;
    for (contador = 0; contador < quantidade_pessoas; ++contador) {
        preencher_dados(&dados_pessoa[contador]);
    }
    for (contador = 0; contador < quantidade_pessoas; ++contador) {
        imprimir(&dados_pessoa[contador]);
    }
    int opcao;
    int n_documento_nova_idade;
    int nova_idade;
    do{
        int pessoa_troca_idade=-1;
        printf("Deseja alterar idade de alguma pessoa? \n 1-Sim \n 2-Nao \n");
        scanf("%d",&opcao);
        if(opcao==1){
            printf("Informe o numero do documento da pessoa que deseja alterar a idade \n");
            scanf("%d",&n_documento_nova_idade);
            for(contador=0;contador<quantidade_pessoas;contador++){
                if(n_documento_nova_idade==dados_pessoa[contador].n_documento){
                    pessoa_troca_idade=contador;
                }
            }
            if(pessoa_troca_idade==-1){
                printf("Numero do documento invalido tente novamente \n");
            }
            else{
                
                printf("Informe a nova idade de %s: \n",dados_pessoa[pessoa_troca_idade].nome);
                scanf("%d",&nova_idade);
                trocar_idade(&dados_pessoa[pessoa_troca_idade],nova_idade);
            }
            
        }
    } while (opcao!=2);

    pessoa_velha_nova(dados_pessoa,quantidade_pessoas);
    
}