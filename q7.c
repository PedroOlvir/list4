#include <stdio.h>

int main(){
    char cod;
    float valor,somaV= 0,somaP= 0, somaT=0;
    for (int i = 1; i <= 5; i++){
    printf("\nInforme o tipode pagamento:\nV ou v ------------ PAGAMENTO A VISTA: \nP ou p ------------ PAGAMENTO  A PRAZO: ");
    scanf(" %c",&cod);

    printf("\nInforme o valor da %d compra: ", i);
    scanf(" %f",&valor);

    if(cod == 'V' || cod == 'v'){
        somaV+=valor;
    } else if( cod == 'P' || cod == 'p'){
        somaP+=valor;
    } else{
        printf("Cod não cadastrado no sistema...");
    }
    somaT = somaV+somaP;
   }
    printf("\nA soma a vista e = %.2f", somaV);
    printf("\nA soma a prazo e = %.2f", somaP);
    printf("\nA soma a total e = %.2f", somaT);
}