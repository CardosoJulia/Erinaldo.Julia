/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void verificarTrianguloRetangulo(int a, int b, int c) {
    int maior, lado1, lado2;
    
    if (a >= b && a >= c) {
        maior = a;
        lado1 = b;
        lado2 = c;
    } else if (b >= a && b >= c) {
        maior = b;
        lado1 = a;
        lado2 = c;
    } else {
        maior = c;
        lado1 = a;
        lado2 = b;
    }
    
    if (maior * maior == lado1 * lado1 + lado2 * lado2) {
        printf("O triângulo é retângulo.\n");
    }

}
int main()
{
     int lado1, lado2, lado3;
    
    printf("Digite os três lados do triângulo:\n");
    scanf("%d %d %d", &lado1, &lado2, &lado3);
    
    verificarTrianguloRetangulo(lado1, lado2, lado3)

    return 0;
}
