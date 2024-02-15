#include <stdio.h>
int main(){
int max,min,n,not,c;
max=0;
min=101;
scanf("%d",&n);
for(c=1;c<=n;c=c+1){
    scanf("%d",&not);
    if(not>max){
        max=not;
    }
    if(not<min){
        min=not;
    }
}
printf("%d\n",min);
printf("%d",max);
    return 0;
}