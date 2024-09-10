//6. Elabore uma função que receba a nota de um aluno (de 0 a 10) e classifique se
//ele foi aprovado ou reprovado. A aprovação ocorre se a nota for 7 ou superior, e
//reprovação caso contrário. A função deve exibir mensagens para os dois casos. (0.3
//ponto)


#include <stdio.h>

int main() {

int nota;
  

     printf("Informe sua nota (de 0 a 10): ");
          scanf("%d", &nota);
  
           if(nota >= 7) 
                  printf("Parabens! Você foi aprovado. ");
       
             else
               printf("Você não foi aprovado.");
        
   

return 0;}
        
              
