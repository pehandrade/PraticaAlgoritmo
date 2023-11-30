#include <stdio.h>
int i, j, soma;
void calculo(){
    if(i>j){
        soma=((i+j)*(i-j+1)/2)-(i+j);
    }
    else{
        soma=((j+i)*(j-i+1)/2)-(i+j);
    }
    printf("%d",soma);
}

int main ( ) { 
    scanf("%d", &i);
    scanf("%d", &j);
    calculo();
}