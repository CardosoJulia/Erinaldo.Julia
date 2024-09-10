//8. Elabore uma função que calcule o imposto sobre um salário com base no valor
//recebido. Se o salário for maior que R$ 5.000,00, o imposto será de 20%. Caso
//contrário, o imposto será de 10%. A função deve exibir o valor do imposto a ser
//pago. (0.3 ponto)


#include <stdio.h>

int main() {

float sal; 

  
      printf("Informe seu salário: ");  
          scanf("%f", &sal);
    
              if(sal >= 5000) 
                 printf("O imposto a ser pago sobre R$%.2f é de: R$%.2f:", sal, (sal*20)/100);
              else
                  printf("O imposto a ser pago sobre R$%.2f é de: R$%.2f", sal, (sal*10)/100);
               
              
                  
return 0;}
        
              
