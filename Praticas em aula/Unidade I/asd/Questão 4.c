#include <stdio.h>
int main(){
    int n,x,c,r;
    r=1;
    scanf("%d\n",&x);
    scanf("%d\n",&n);
    for(c=1;c<=n;c=c+1)
    {
        r=r*x;
    }
    printf("%d",r);
    return 0;
}