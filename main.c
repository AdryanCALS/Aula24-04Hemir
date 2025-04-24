#include <stdio.h>
#include <stdlib.h>

int main()
{
struct fracao {
    int numerador, denominador;
}f1,f2;

f1.numerador = 10
f1.denominador = 3
f2.numerador = 5
f2.denominador = 4

char operacao;
printf("Digite a operacao: ");
scanf("%c", &operacao);
if(operacao == "x"){
    int numerador_mult
    mdc(f1.denominador, f2.denominador);
    mmc(f1.denominador, f2.denominador);
    printf("%d/%d", )
}
}
//Algoritmo de Euclides iterativo
int mdc(int a, int b){
while(b != 0){
    int r = a % b;
    a = b;
    b = r;
}
return a;
}
int mmc(int a, int b){
    return a * (b / mdc(a, b));
}
