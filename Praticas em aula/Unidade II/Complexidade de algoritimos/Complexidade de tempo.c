#include<stdio.h>

int max(int arr[],int n){
    int i;/*c1,1 vez*/
    int max=arr[0];/*c2,1 vez*/
    for(i=1;i<n;i++){/*c3,n-1 vezes*/
        if(arr[i]>max){/*c4,n-1 vezes*/
            max=arr[i];/*c5,entre 0 e n-1 vezes*/
        }
    }
    return max;/*c6,1 vez*/
}
/*Tempo total:
T(max) pior caso=c1+c2+c3(n-1)+c4(n-1)+c5(n-1)+c6=(n-1)(c3+c4+c5)+c1+c2+c6
T(max) melhor caso=c1+c2+c3(n-1)+c4(n-1)+c5(0)+c6=(n-1)(c3+c4)+c1+c2+c6*/


int funcao_aula(int max1,int max2){
    int count1,count2;/*c1, 1vez*/
    for(count1=0;count1<max1;count1++){/*c2, max1 vezes*/
        for(count2=0;count2<max2;count2++){/*c3,max2*max1 vezes*/
            printf("Exemplo da aula");/*c4,max2 vezes*/
        }
    }
    return 0;/*c5, 1 vez*/
}
/*T(funcao_aula)=c1+c2*max1+c3*max2*max1+c4*max2+c5=max2(max1*c3+c4)+max1*c2+c1+c6*/

void insertionSort(int arr[],int n){
    int i,key,j;//c1,1 vez
    for(i=1;i<n;i++){//c2,n vezes
        key=arr[i];//c3,n vezes
        j=i-1;//c4,n vezes
        while(j>=0 && arr[j]>key){//c5,n*n vezes
            arr[j+1]=arr[j];//c6,n*n vezes
            j=j-1;//c7,n*n vezes
        }
        arr[j+1]=key;//c8,n vezes
    }
}
/*Pior caso:c1+c2*n+c3*n+c4*n+c5*n²+c6*n²+c7*n²+c8*n=(c5+c6+c7)*n²+(c2+c3+c4+c8)*n+c1
an²+bn+c
an²+bn
an²
O(n²)
Melhor caso:c1+c2*n+c3*n+c4*n+c8*n=(c2+c3+c4+c8)*n+c1
an+b
an
O(n)
*/