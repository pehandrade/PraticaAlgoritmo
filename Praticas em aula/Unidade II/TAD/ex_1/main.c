#include<stdio.h>
#include"aluno.c"

int main(void){
    Aluno * aluno1;
    aluno1=recebe_dados();
    imprime_dados(aluno1);
    libera(aluno1);
    return 0;
}