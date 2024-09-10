/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void validador (int num) {
    if (num == 2 || num == 3 || num == 5 || num == 7) {
        printf("1");
     }else {
       if (num == 1 || num == 4 || num == 8 || num == 9 || num == 10);{
    
    } 
     }
}

int main()
{
    
    int numero;
    printf("Insira um número de 1 a 10");
    scanf("%d" , &numero);
if(numero <= 10){
    validador(numero);
}
else {
    printf("Apenas numeros de 1 a 10");

    return 0;
}
}
