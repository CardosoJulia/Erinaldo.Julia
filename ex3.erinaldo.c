/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void pita(int n1,int n2,int n3){
      if(n1 + n2 > n3 && n2 + n3 > n1 && n3 + n1 > n2){
          printf("1");
      }
  }

int main()
{
        int lado1, lado2, lado3;
printf("Insira três lados de um triangulo");
scanf("%d, %d, %d", &lado1, &lado2,&lado3);
pita(lado1,lado2,lado3);


    return 0;
}
