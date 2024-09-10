//10. Elabore uma função que receba o salário bruto de uma pessoa e calcule o valor
//da contribuição ao INSS com base na tabela de INSS de 2024. Utilize as faixas e
//alíquotas progressivas para calcular o valor da contribuição:
//● Até R$ 1.320,00: 7,5%
//● De R$ 1.320,01 até R$ 2.571,29: 9%
//● De R$ 2.571,30 até R$ 3.856,94: 12%
//● De R$ 3.856,95 até R$ 7.507,49: 14%


#include <stdio.h>

int main() {

float sal; 

  
      printf("Informe seu salário: R$");  
          scanf("%f", &sal);
                    
               if(sal<=1320.00)
                    printf("O valor da contribuição ao INSS é de R$%.2f:", (sal*75)/1000);
               
               if(sal>1320.00 && sal <= 2571.29)  
                     printf("O valor da contribuição ao INSS é de R$%.2f:", (sal*9)/100);
            
               if(sal>2571.29 && sal<= 3856.94)  
                     printf("O valor da contribuição ao INSS é de R$%.2f:", (sal*12)/100);
      
               if(sal>3856.94 && sal<= 7507.49)  
                     printf("O imposto a ser pago sobre R$%.2f é de R$%.2f:", sal, (sal*14)/100);


                     
return 0;}  

        
              
