#include<stdio.h>
#include<stdlib.h>

typedef struct dados_funcionario{
    char Nome[50];
    float Salario;
    int Identificador;
    char Cargo[20];
}Funcionario;

void preencher(Funcionario *func[]){
    printf("Digite o nome do funcionario: \n");
    scanf("%[^\n]s", &func->Nome);
    printf("Digite o salario do funcionario: \n");
    scanf("%f",&func->Salario);
    printf("Digite a matricula do aluno: \n");
    scanf("%d",&func->Identificador);
    printf("Digite o email do aluno: \n");
    scanf(" %[^\n]s",&func->Cargo);
}
void novo_funcionario(int quantidade_novos_funcionario){
     Funcionario * func = (Funcionario*) realloc(func, quantidade_novos_funcionario*sizeof(Funcionario));
     if (func==NULL){
        exit(1);
    }
}
void imprimir(Funcionario *func){
    printf("Nome: %s",func->Nome);
    printf("salario: %f",func->Salario);
    printf("Identificador: %d",func->Identificador);
    printf("Cargo: %s",func->Cargo);
}
void alterar_salario(Funcionario *func, float novo_salario){
    func->Salario=novo_salario;
}
int main(void){
    int quantidade_funcionario;
    printf("Informe a quantidade de funcionarios");
    scanf("%d",&quantidade_funcionario);
    Funcionario * func = (Funcionario*) malloc(quantidade_funcionario*sizeof(Funcionario));
    if (func==NULL){
        exit(1);
    }
    int contador;
    for(contador=0;contador<quantidade_funcionario;++contador){
        preencher(func[contador]);
    }
    int opcao;
    while (opcao!=2){
        printf("Deseja cadastrar novos funcionarios? \n 1-Sim 2-Nao");
        scanf("%d",&opcao); 
        int quantidade_novos_funcionario=0; 
        if(opcao==1){ 
            printf("Quantos novos funcionarios?");
            scanf("%d",&quantidade_novos_funcionario);
            novo_funcionario(quantidade_novos_funcionario);
            for(contador=quantidade_funcionario;contador<quantidade_novos_funcionario;++contador){
                preencher(func[contador]);
            }
            quantidade_funcionario+=quantidade_novos_funcionario;
        }
    }
    
    imprimir(func);
    printf("Deseja alterar o salario? \nDigite 1-(Sim) 2-(Nao)");
    scanf("%d",&opcao);
    float novo_salario;
    if(opcao==1){
        printf("Digite o novo salario:\n");
        scanf("%f",&novo_salario);
        alterar_salario(func, novo_salario);
    }

} 