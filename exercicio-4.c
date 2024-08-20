// Faça um programa que receba o salário de um 
// funcionário, calcule e mostre o novo salário, 
// sabendo-se que este sofreu um aumento de 25%.

#include <stdio.h>

int main(){
    float salario, salario_ajust;
    printf("Digite o valor do salário ");
    scanf("%f", &salario);

    salario_ajust = salario + (salario * 0.25);

    printf("O salário com aumento é %5.2f", salario_ajust);

}