#include <stdio.h>
#include <stdlib.h>

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

int main(){
struct fracao {
    int numerador, denominador;
}f1,f2;

printf("Digite o valor para o numerador da primeira fracao: ");
scanf("%d", &f1.numerador);
printf("Digite o valor para o denominador da primeira fracao: ");
scanf("%d", &f1.denominador);
printf("Digite o valor para o numerador da primeira fracao: ");
scanf("%d", &f2.numerador);
printf("Digite o valor para o denominador da primeira fracao: ");
scanf("%d", &f2.denominador);

char operacao;
printf("Digite a operacao: ");
scanf(" %c", &operacao);
if(operacao == 'x'){
    float numerador_mult = (f1.numerador * f2.numerador);
    float denominador_mult = (f1.denominador * f2.denominador);
    float decimal_mult = numerador_mult/denominador_mult;
    printf("%.0f/%.0f ou:\n", numerador_mult, denominador_mult);
    printf("%.2f", decimal_mult);
}
if(operacao == '/'){
    float numerador_div = (f1.numerador * f2.denominador);
    float denominador_div = (f1.denominador * f2.numerador);
    float decimal_div = numerador_div/denominador_div;
    printf("%.0f/%.0f ou:\n", numerador_div, denominador_div);
    printf("%.2f", decimal_div);
}
else if (operacao == '+'){
    float denominador_add = mmc(f1.denominador, f2.denominador);
    float numerador_add = (denominador_add/f1.denominador)*f1.numerador + (denominador_add/f2.denominador)*f2.numerador;
    float decimal_add = numerador_add/denominador_add;
    printf("%.0f/%.0f ou:\n", numerador_add, denominador_add);
    printf("%.2f", decimal_add);    
}
else if (operacao == '-'){
    float denominador_sub = mmc(f1.denominador, f2.denominador);
    float numerador_sub = (denominador_sub/f1.denominador)*f1.numerador - (denominador_sub/f2.denominador)*f2.numerador;
    float decimal_sub = numerador_sub/denominador_sub;
    printf("%.0f/%.0f ou:\n", numerador_sub, denominador_sub);
    printf("%.2f", decimal_sub);    
}
else{
    printf("digite uma operacao valida!!!");
}
}
