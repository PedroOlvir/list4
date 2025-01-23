#include <stdio.h>

int main(){
    float numMaior=0,numMenor=0, media,soma=0;
    float num;
    int i = 1;
    for ( i = 1; i <= 4; i++){
      printf("Digite o valor da %d° compra: ",i);
      scanf("%f", &num);
      if(i==1){
        numMenor=num;
      }
      if(num>numMaior){
        numMaior = num;
      }
        if(num<numMenor){
        numMenor = num;
      }
      soma+=num;
    }
    media = (soma/(i-1));
    printf("O menor valor da compra e %.2f",numMenor);
    printf("\nO maior valor da compra e %.2f",numMaior);
    printf("\nA media do valor da compra e %.2f",media);
}