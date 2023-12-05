#include <stdio.h>
#include <conio.h>
int a,b;
int soma(int a, int b){
    return a + b;
}
int subtracao(int a, int b){
    return a - b;
}
int multiplicacao(int a, int b){
    return a * b;
}
int divicao(int a, int b){
    return a / b;
}

int calcula(int x, int y, int (*operacao)(int, int)){
    return (*operacao)(x,y);
}

int main(){
    int c,d;
    int opcao;
    int resultado;
    printf("escolha a operacao desejada:\n 1=soma\n2=subtracao\n3=multiplicacao\n4=divicao\n");
    scanf("%d",&opcao);
    switch (opcao){
    case 1:
        printf("escolha o primeiro numero:\n");
        scanf("%d",&c);
        printf("escolha o segundo numero:\n");
        scanf("%d",&d);
        resultado = calcula(c, d, soma);
        printf("resultado: %d",resultado);
        break;
    
    case 2:
        printf("escolha o primeiro numero:\n");
        scanf("%d",&c);
        printf("escolha o segundo numero:\n");
        scanf("%d",&d);
        resultado = calcula(c, d, subtracao);
        printf("resultado: %d",resultado);
        break;
    case 3:
        printf("escolha o primeiro numero:\n");
        scanf("%d",&c);
        printf("escolha o segundo numero:\n");
        scanf("%d",&d);
        resultado = calcula(c, d, multiplicacao);
        printf("resultado: %d",resultado);
        break;
    case 4:
        printf("escolha o primeiro numero:\n");
        scanf("%d",&c);
        printf("escolha o segundo numero:\n");
        scanf("%d",&d);
        resultado = calcula(c, d, divicao);
        printf("resultado: %d",resultado);
        break;
    }
    return 0;
}