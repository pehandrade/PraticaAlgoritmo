#include<stdio.h>
#include<stdlib.h>
struct professor{//Declaração a estrutura da struct professor
    char nome[50];
    int idade;
    int matricula;
    char email[50];
    int niss;
    float salario;
    char instituicao[30];

};
void preenche(struct professor * professor){//Função para o preenchimento da struct professor
    printf("Digite o nome do professor: \n");
    scanf("%[^\n]s", &professor->nome);
    printf("Digite a idade do professor: \n");
    scanf("%d",&professor->idade);
    printf("Digite a matricula do professor: \n");
    scanf("%d",&professor->matricula);
    printf("Digite o email do professor: \n");
    scanf(" %s",&professor->email);
    printf("Digite o NISS do professor \n");
    scanf("%d",&professor->niss);
    printf("Digite o salario do professor: \n");
    scanf("%f",&professor->salario);
    printf("Digite a instituição em que o professor trabalha: \n");
    scanf("%%[^\n]s",professor->instituicao);
}
void imprime(struct professor * professor){//Função para imprimir 
    printf("Nome: %s\n Idade: %d \n Matricula: %d \n Email: %s \n NISS: %d \n Salário: %f \n Instituição: %s",professor->nome,professor->idade,professor->matricula,professor->email,professor->niss,professor->salario,professor->instituicao);
}

int main(){
    struct professor *professor = (struct professor*) malloc (sizeof(struct professor));//Alocação dinamica da struct
    if(professor==NULL){//Teste da alocação na memória
        exit(1);
    }
    preenche(professor);
    imprime(professor);
    free(professor);
    return 0;
}
//usando o typedef alterar o nome da struct professor para funcionario publico. 