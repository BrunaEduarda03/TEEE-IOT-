#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float valorRMS (int sinal[],int tam){
    float sum = 0;
    int i;
    for(i = 0;i<tam;i++) {
        sum+=pow(sinal[i],2);         // soma dos valores do array sinal ao quadrado
    }
    float med = (float) (sum/i);     // media dos valores
    float valor_rms = sqrt(sum/i);   //raiz da media
    
    return valor_rms;
}