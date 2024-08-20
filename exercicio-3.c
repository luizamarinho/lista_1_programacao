// 3. Faça um programa que receba três notas e seus respectivos
// pesos, calcule e mostre a média ponderada.

#include <stdio.h>;

int main() {
  float nota1, nota2, nota3, media;
  int peso1, peso2, peso3;

  printf("Digite a primeira nota ");
  scanf("%f", &nota1);

  printf("Digite o peso da primeira nota ");
  scanf("%d", &peso1);

  printf("Digite a segunda nota ");
  scanf("%f", &nota2);

  printf("Digite o peso da segunda nota ");
  scanf("%d", &peso2);

  printf("Digite a terceira nota ");
  scanf("%f", &nota3);

  printf("Digite o peso da terceira nota ");
  scanf("%d", &peso3);

  media = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) /
          (peso1 + peso2 + peso3);

  printf("A média ponderada é %4.2f", media);
};