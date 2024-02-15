#include <stdio.h>
int main(){
    int x,y,c;
    scanf("%d",&x);
    y=1;
    for(c=1;c<=x;c++){   
        printf("%d\n",y);
        y=y+2;
    }
    return 0;
}