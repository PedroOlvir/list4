#include <stdio.h>

int main(){
    float altura,peso;
    int idade, idaMais50=0, pesoMenos60=0, alturaMedia=0;
    int i = 1;
    for (i; i <=5; i++){
        printf("Informe sua idade %d: ", i);
        scanf("%d", &idade);
        printf("Informe seu peso:%d: ", i);
        scanf("%f", &peso);
        printf("Informe sua altura:%d: ", i);
        scanf("%f", &altura);
        if (idade> 50){
            idaMais50+=1;
        }
        if(peso < 60){
            pesoMenos60+=1;
        }
        if(altura > 1 && altura < 2){
            alturaMedia+=1;
        }
    }
    printf("\n\nHa %d > que 50 anos\n\n Ha %d maior < 60kg \n\n Ha %d pessoas entre 1 a 2 metros de altura", idaMais50, pesoMenos60,alturaMedia);
}