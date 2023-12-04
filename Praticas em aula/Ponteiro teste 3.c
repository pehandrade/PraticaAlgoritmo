#include <stdio.h>
int a,b;
int soma(a,  b){
    return a + b;
}
int subtracao(a, b){
    return a - b;
}
int multiplicacao(a, b){
    return a * b;
}
int divicao(a, b){
    return a / b;
}

int calcula(int x, int y, int (*operacao)(int, int)){
    return (*operacao)(x,y);
}

int main(){
    int opcao;
    int resultado;
    printf("escolha a operacao desejada:\n 1=soma\n2=subtracao\n3=multiplicacao\n4=divicao\n");
    scanf("%d",opcao);
    switch (opcao){
    case 1:
        resultado = calcula(5, 3, soma);
        printf("resultado: %d",resultado);
        break;
    
    case 2:
        resultado = calcula(5, 3, subtracao);
        printf("resultado: %d",resultado);
        break;
    case 3:
        resultado = calcula(5, 3, multiplicacao);
        printf("resultado: %d",resultado);
    case 4:
        resultado = calcula(5, 3, divicao);
        printf("resultado: %d",resultado);
    }
    return 0;
}