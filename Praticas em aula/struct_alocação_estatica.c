#include<stdio.h>
struct aluno{//Declaração a estrutura da struct aluno
    char nome[50];
    int idade;
    int matricula;
    char email[50];
};
int main(){
    struct aluno estudante_1
    printf("Digite o nome do aluno: \n");
    scanf("%[^\n]s", &estudante_1.nome);
    printf("Digite a idade do aluno: \n");
    scanf("%d",&estudante_1.idade);
    printf("Digite a matricula do aluno: \n");
    scanf("%d",&estudante_1.matricula);
    printf("Digite o email do aluno: \n");
    scanf(" %[^\n]s",&estudante_1.email);
    return 0;
}