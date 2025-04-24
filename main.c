#include <stdio.h>

int Somatorio1(){
    int soma = 0;
    for(int i = 0; i <= 10; i++){
        soma +=i;
    }
    return soma;
}
int Somatorio2(){
    int soma = 0;
    for(int i = 0; i <= 10; i++){
        soma = soma + 2*i;
    }
    return soma;
}
int Somatorio3(){
    int soma = 0;
    for(int i = 0; i <= 10; i++){
        soma = soma + i*i;
    }
    return soma;
}
int Somatorio4(){
    int soma = 0;
    for(int i = 0; i <= 10; i++){
        soma = soma + i*i*i;
    }
    return soma;
}

