#include <stdio.h>

int main(){
    int impar;

    for (int i = 100; i <= 300; i++){
        if (i%2==1){
           impar+=1;
        }
        
    }
    printf("Existe %d Numeros impares entre o numero 100 e 300\n", impar);
}