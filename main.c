#include <stdio.h>
#include <stdlib.h>

int mmc(int a, int b){
    return a * (b / mdc(a, b));
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
int main(){
struct fracao {
    int numerador, denominador;
}f1,f2;

f1.numerador = 10;
f1.denominador = 3;
f2.numerador = 5;
f2.denominador = 4;

char operacao;
printf("Digite a operacao: ");
scanf("%c", &operacao);
if(operacao == 'x'){
    float numerador_mult = (f1.numerador * f2.numerador);
    float denominador_mult = (f1.denominador * f2.denominador);
    float decimal_mult = numerador_mult/denominador_mult;
    printf("%.0f/%.0f ou:\n", numerador_mult, denominador_mult);
    printf("%.2f", decimal_mult);
}
else if (operacao == '+'){
    float denominador_add = mmc(f1.denominador, f2.denominador);
    float numerador_add = (denominador_add/f1.denominador)*f1.numerador + (denominador_add/f2.denominador)*f2.numerador;
    printf("%.0f/%.0f", numerador_add, denominador_add);
}

}
