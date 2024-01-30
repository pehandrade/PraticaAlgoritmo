#include <stdio.h>
#include <stdlib.h>

typedef struct dados_funcionario {
    char Nome[50];
    float Salario;
    int Identificador;
    char Cargo[20];
} Funcionario;

void preencher(Funcionario *func) {
    printf("Digite o nome do funcionario: \n");
    scanf(" %[^\n]s", func->Nome);
    printf("Digite o salario do funcionario: \n");
    scanf("%f", &func->Salario);
    printf("Digite a matricula do aluno: \n");
    scanf("%d", &func->Identificador);
    printf("Digite o cargo do funcionario: \n");
    scanf(" %[^\n]s", func->Cargo);
}

void novo_funcionario(Funcionario *func, int quantidade_novos_funcionario, int *quantidade_funcionario) {
    func = (Funcionario *)realloc(func, (*quantidade_funcionario + quantidade_novos_funcionario) * sizeof(Funcionario));
    if (func == NULL) {
        exit(1);
    }

    int contador;
    for (contador = *quantidade_funcionario; contador < *quantidade_funcionario + quantidade_novos_funcionario; ++contador) {
        preencher(&func[contador]);
    }

    *quantidade_funcionario += quantidade_novos_funcionario;
}

void imprimir(Funcionario *func) {
    printf("Nome: %s\n", func->Nome);
    printf("Salario: %f\n", func->Salario);
    printf("Identificador: %d\n", func->Identificador);
    printf("Cargo: %s\n", func->Cargo);
}

void alterar_salario(Funcionario *func, float novo_salario) {
    func->Salario = novo_salario;
}

void max_min_salario(Funcionario *func, int quantidade_funcionario ){
    float min_salario=2147483647;
    float max_salario=-1;
    int max_salario_cont=0;
    int min_salario_cont=0;
    int contador;
    for (contador = 0; contador < quantidade_funcionario; ++contador) {
        if(func[contador].Salario>max_salario){
        max_salario_cont=contador;
        max_salario = func[contador].Salario;
        }
        if(func[contador].Salario<min_salario){
        min_salario_cont=contador;
        min_salario = func[contador].Salario;
        }
    }
    
    printf("Maior salario: \nCargo:%s \nSalario:%f \n",func[max_salario_cont].Cargo,func[max_salario_cont].Salario);
    printf("Menor salario: \nCargo:%s \nSalario:%f \n",func[min_salario_cont].Cargo,func[min_salario_cont].Salario);
}

int main(void) {
    int quantidade_funcionario;
    printf("Informe a quantidade de funcionarios: \n");
    scanf("%d", &quantidade_funcionario);

    Funcionario *func = (Funcionario *)malloc(quantidade_funcionario * sizeof(Funcionario));
    if (func == NULL) {
        exit(1);
    }

    int contador;
    for (contador = 0; contador < quantidade_funcionario; ++contador) {
        preencher(&func[contador]);
    }

    int opcao;
    do {
        printf("Deseja cadastrar novos funcionarios? \n 1-Sim 2-Nao\n");
        scanf("%d", &opcao);
        int quantidade_novos_funcionario = 0;
        if (opcao == 1) {
            printf("Quantos novos funcionarios? ");
            scanf("%d", &quantidade_novos_funcionario);
            novo_funcionario(&func, quantidade_novos_funcionario, &quantidade_funcionario);
        }
    } while (opcao != 2);

    for (contador = 0; contador < quantidade_funcionario; ++contador) {
        imprimir(&func[contador]);
    }
    float novo_salario;
    int identificador_busca;
    int funcionario_troca_salario;
    do{
        funcionario_troca_salario=-1;   
        printf("Deseja alterar o salario? \nDigite 1-(Sim) 2-(Nao) \n");
        scanf("%d", &opcao);
    
        if (opcao == 1) {
         printf("Informe o identificador do funcionario que deseja alterar o salario: \n");
            scanf("%d",&identificador_busca);
            for(contador=0;contador<quantidade_funcionario;++contador){
                if(identificador_busca==func[contador].Identificador){
                    funcionario_troca_salario=contador;
                }
            }
            if(funcionario_troca_salario!=-1){
                printf("Digite o novo salario:\n");
                scanf("%f", &novo_salario);
                alterar_salario(&func[funcionario_troca_salario], novo_salario);
                break;
            } else{
                printf("Funcionario com identificador %d nao encontrado \n",identificador_busca);
            }
        }
    }while(opcao==1)
    
    max_min_salario(&func, quantidade_funcionario);
    free(func);
    return 0;
}
