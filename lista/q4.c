#include <stdio.h>

int main(){
    float media, soma=0, max, min;
    int valor;
    int i = 1;
    for (; i <=4; i++){
     printf("Digite o valor da compra: ");
     scanf("%d", &valor);
     soma+=valor;
     if(i==1){
        min=valor;
     }
     if(valor>max){
        max=valor;
     }
     if(valor<min){
        min = valor;
     }
    }
    media = (soma/(i-1));
    printf("A media e %.2f\n",media);
    printf("max e %.2f\n",max);
    printf("min e %.2f\n",min);
}