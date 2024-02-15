#include <stdio.h>
int main(){
    int n,s,c,x;
    s=0;
    scanf("%d",&n);
    for(c=1;c<=n;c=c+1){
        scanf("%d",&x);
        if(x%2==0){
            s=s+x;
        }
    }
    printf("%d",s);
    return 0;
}