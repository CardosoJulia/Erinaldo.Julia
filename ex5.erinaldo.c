/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void idade(int y){
    if(y >= 18){
        printf("Você é meior de idade");
    }
    else{
        printf("Você ainda é menor de idade");
    }
}

int main()
{
     
    int i;
    printf("Insira sua idade:\n");
    scanf("%d", &i);
    
    idade(i);

    return 0;
}
