#include <stdio.h>

int main(void)
{
   int VetorA[5];
   int VetorB[5];
   int VetorC[5];
   int i;
   
   printf("***VetorA***\n");
   //criando VetorA
   for (i=0; i<5; i++){
       printf ("Digite o %d numero: ", i+1);
       scanf("%d", &VetorA[i]);
   }
   
   printf("\n***VetorB***\n");
   //criando VetorB
   for (i=0; i<5; i++){
       printf ("Digite o %d numero: ", i+1);
       scanf("%d", &VetorB[i]);
   }
   
      //Gerando VetorC
   for(i=0; i<6; i++){
       VetorC[i] = VetorA[i] + VetorB[i];
       
   }
   
   //exibindo o VetorC
   printf("\n***Resultado do VetorC***\n");
   for (i=0; i<5; i++){
       printf("O %d numero e: %d \n", i+1, VetorC[i]);
   }
       return 0;
}