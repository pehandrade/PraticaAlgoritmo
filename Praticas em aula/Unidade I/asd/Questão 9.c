#include <stdio.h>
int main(){
    int n,c,o;
    o=0;
    scanf("%d",&n);
    for(c=1;c<=n;c=c+1){
        if((c*(c+1)*(c+2))==n){
            o=1;
        }
    }
    if(o==1){
        printf("Sim %d triangular",n);
    }
    return 0;
}