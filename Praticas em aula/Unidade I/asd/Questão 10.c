#include <stdio.h>
int main(){
    int c,o,n;
    scanf("%d",&n);
    o=0;
    for(c=2;c<n;c=c+1){
        if(n%c==0){
            o=1;
        }
    }
    if(o==0){
        printf("Sim %d primo",n);
    }
    return 0;
}