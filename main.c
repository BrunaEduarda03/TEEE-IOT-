// ALUNA: BRUNA EDUARDA CRUZ MACIEL - 120210875

#include <stdio.h>
#include "valorRMS.h"
#include <stdlib.h>
#include<string.h>
#define  TAM 121
// size_t n = sizeof(sinal)/sizeof(sinal[0]);
// printf("The size of the array is %ld\n", TAM);

// short = __int16 = __int16_t= int


int main()
{

   FILE *file;                     //criar ponteiro para o arquivo
   file = fopen("sinal.txt","r");  //ler arquivo 
   int sinal[TAM];
  
   for(int i=0;i<TAM;i++) {
      fscanf(file,"%i",&sinal[i]);   // escanear dados do arquivo sinal.txt
      printf("%d\n",sinal[i]);       //mostrar dados do arquivo
}
  
   printf("Valor RMS e de %.2f\n", valorRMS(sinal, TAM));
   
   fclose(file);
   
  return 0;
}

 