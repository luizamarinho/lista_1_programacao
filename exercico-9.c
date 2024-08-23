//  Sabe-se que:
// pé = 12 polegadas
// 1 jarda = 3 pés
// 1 milha = 1,760 jarda
// Faça um programa que receba uma medida em pés, faça 
// as conversões a seguir e mostre os resultados.
// a) polegadas;
// b) jardas;
// c) milhas.

#include <stdio.h>

int main() {
  float valor_pes, polegadas, jardas, milhas;
  printf("Insira uma medida em pes ");
  scanf("%f", &valor_pes);

  polegadas = valor_pes / 12;
  jardas = valor_pes * 3;
  milhas = valor_pes * 5.28;

  printf("a medida em polegadas equivale a %0.1f \n", polegadas);
  printf("a medida em jardas equivale a %0.1f \n", jardas);
  printf("a medida em milhas equivale a %0.1f \n", milhas);

  return 0;
}