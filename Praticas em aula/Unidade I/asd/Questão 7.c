#include <stdio.h>
int main(){
    int c,n,r;
    r=1;
    scanf("%d",&n);
    for(c=1;c<=n;c=c+1){
        r=r*c;
    }
    printf("%d",r);
    return 0;
}