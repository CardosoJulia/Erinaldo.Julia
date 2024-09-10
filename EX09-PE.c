//9. Crie uma função que receba o salário bruto de uma pessoa e calcule o valor do
//Imposto de Renda Retido na Fonte (IRRF) com base na tabela de IRRF de 2024.
//Utilize as alíquotas e deduções conforme a tabela abaixo:


#include <stdio.h>

int main() {

float sal; 

  
      printf("Informe seu salário: R$ ");  
          scanf("%f", &sal);
                    
               if(sal>2112 && sal<= 2826.65)  
                    printf("O imposto a ser pago sobre R$%.2f é de R$%.2f:", sal, (sal*75)/1000);
               
               if(sal>2826.65 && sal<= 3751.05)  
                     printf("O imposto a ser pago sobre R$%.2f é de R$%.2f:", sal, (sal*15)/100);
            
               if(sal>3751.05 && sal<= 4664.68)  
                     printf("O imposto a ser pago sobre R$%.2f é de R$%.2f:", sal, (sal*225)/1000);
      
               if(sal> 4664.68) 
                     printf("O imposto a ser pago sobre R$%.2f é de R$%.2f:", sal, (sal*275)/1000);

               if(sal<= 2112)    
                     printf("O imposto é isento sobre R$%.2f", sal);

                     
return 0;}  

        
              
