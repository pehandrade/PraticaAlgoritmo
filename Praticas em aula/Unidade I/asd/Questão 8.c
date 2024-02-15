#include <stdio.h>
int main(){
    int c,n,i,j;
    scanf("%d",&n);
    scanf("%d",&i);
    scanf("%d",&j);
    for(c=1;c<=n;c=c+1){
        if(c%i==0 || c%j==0){
            printf("%d, ",c);
        }
        else{
            n=n+1;
        }
    }
    return 0;
}