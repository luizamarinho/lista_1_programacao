// Faça um programa que calcule e mostre a área de 
// um círculo. Sabe-se que: Área = π * R2

#include <stdio.h>

int main(){
    float raio, pi, area;
    printf("Digite o valor do raio ");
    scanf("%f", &raio);
    printf("Digite o valor de pi ");
    scanf("%f", &pi);

    area = pi * (raio*raio);

    printf("A area do circulo eh %4.2f", area);

    return 0;
}