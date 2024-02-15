#include <stdio.h>
int main(){

float mt,n1,n2,n3;
float ma[50];

for (int  i = 0; i < 50; i++)
{
    printf("informe a nota do %d aluno\n", i+1);
    printf("informe a 1 nota\n");
    scanf("%f", &n1);
    printf("informe a 2 nota\n");
    scanf("%f", &n2);
    printf("informe a 3 nota\n");
    scanf("%f", &n3);
    ma[i]=(n1+n2+n3)/3.0;
    mt=mt+ma[i];
}
for ( int j = 0; j < 50; j++)
{
    printf("a media do %d aluno foi:",j+1);
    printf("%f\n",ma[j]);
}
printf("%f\n",mt/50.0);

}