#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1415926535

typedef struct circulo{
    float raio;
    float area_ret;
}Circulo;

typedef struct retangulo{
    float altura;
    float base;
    float area_circ;
}Retangulo;

float ret_circunscrito(Circulo * circ, float h){
    float base=sqrt(pow((circ->raio*2.0),2.0)-pow(h,2.0));
    circ->area_ret=h*base;
    return circ->area_ret;
}

float circ_interno(Retangulo * ret){
    
    if(ret->altura>ret->base){
        ret->area_circ=pow((ret->altura/2.0),2.0)* PI;
    }
    else{
        ret->area_circ=pow((ret->base/2.0),2.0)* PI;
    }
    return ret->area_circ;
}

int main(void){
    int opcao;
    printf("1-Circulo circunscrito \n2-Circulo inscrito \n");
    scanf("%d",&opcao);
    if(opcao==1){
        Circulo * circulo;
        float altura_h;
        printf("Informe o raio do circulo: \n");
        scanf("%f",&circulo->raio);
        printf("Informe a altura do retangulo circunscrito: \n");
        scanf("%f",&altura_h);
        ret_circunscrito(circulo,altura_h);
        printf("Area maxima do retangulo circunscrito no circulo de raio %.2f: %.2f\n",circulo->raio,circulo->area_ret);
    }
    else if(opcao==2){
        Retangulo * retangulo;
        printf("Informe altura do retangulo \n");
        scanf("%f",&retangulo->altura);
        printf("Informe a base do retangulo \n");
        scanf("%f",&retangulo->base);
        circ_interno(retangulo);
        printf("A area do maior circulo inscrito no retangulo de altura %.2f e base %.2f \n",retangulo->altura,retangulo->base);
        printf("%.2f",retangulo->area_circ);
    }
    else{
        printf("Opcao invalida \n");
    }
}