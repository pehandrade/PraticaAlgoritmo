#include <stdio.h>
int i, j, n;
int vet[]={1,2,3,4,5},vetinv[]={1,2,3,4,5};

 void inverte(int vet[],int n){
  i=0;
  for (j=n-1;j>=0;j--){
    vetinv[j]=vet[i];
    i=i+1;
  }
}

int main(){

  printf("Escolha a quantidade de termos do vetor\n");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("Escolha o valor para alocar no %d vetor\n",i+1);
    scanf("%d\n",&vet[i]);
  }
  inverte(vet, n);

    for(i=0;i<n;i++){
        printf("%d\n",vetinv[i]);
    }
}