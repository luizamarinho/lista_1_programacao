#include <stdio.h>

int main() {

  float nota1, nota2, nota3, soma, media;

  printf("Insira a primeira nota ");
  scanf("%f", &nota1);

  printf("Insira a segunda nota ");
  scanf("%f", &nota2);

  printf("Insira a terceira nota ");
  scanf("%f", &nota3);

  soma = nota1 + nota2 + nota3;

  printf("A media aritmetica eh %f", soma / 3);

  return 0;
}