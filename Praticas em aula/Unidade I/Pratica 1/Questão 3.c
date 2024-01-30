#include <stdio.h>
int main ( ) {
    int N_ant , N_prox , N , N_atual //Falta um ponto e vírgula.
    N_ant = N_atual =1;
    for( i =1 ,i <= N , i ++) { //Falta declarar a variável "i", substituir a vírgula por pontos e vírgulas e a chave para fechar o "for".
        N_prox = N_ant + N_atual ;
        N_ant = N_atual ;
        N_atual = N_prox ;

    printf ("Fim do laco !\n") ;
    return //Falta um ponto e vírgula e definir o retorno.
}