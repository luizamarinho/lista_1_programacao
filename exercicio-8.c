// Faça um programa que receba um número positivo e 
// maior que zero, calcule e mostre:
// a) o número digitado ao quadrado;
// b) o número digitado ao cubo;
// c) a raiz quadrada do número digitado;
// d) a raiz cúbica do número digitado.

#include <stdio.h>

int main(){
    int numero;

    printf("Digite um numero inteiro e maior que zero ");
    scanf("%d", &numero);

    printf("O numero ao quadrado eh %d \n ", numero * numero);
    printf("O numero ao cubo eh %d \n ", numero*numero*numero);

    // incompleto: falta raiz quadrada e raiz cubica

    return 0;
}