#include<stdio.h>
#include<stdlib.h>
struct aluno{//Declaração a estrutura da struct aluno
    char nome[50];
    int idade;
    int matricula;
    char email[50];
};
void preenche(struct aluno * estudante){//Função para o preenchimento da struct aluno
    printf("Digite o nome do aluno: \n");
    scanf("%[^\n]s", &estudante->nome);
    printf("Digite a idade do aluno: \n");
    scanf("%d",&estudante->idade);
    printf("Digite a matricula do aluno: \n");
    scanf("%d",&estudante->matricula);
    printf("Digite o email do aluno: \n");
    scanf(" %[^\n]s",&estudante->email);
}

int main(){
    struct aluno *estudante = (struct aluno*) malloc (sizeof(struct aluno));//Alocação dinamica da struct
    if(estudante==NULL){
        exit(1);
    }
    preenche(estudante);
    free(estudante);
    return 0;
}