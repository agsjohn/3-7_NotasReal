#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main() {
  int valor, cem, cin, dez, cinco, um, cont;
  printf("Digite o valor: ");
  scanf("%i", &valor);
  getchar();
  cem = valor / 100;
  cont = valor % 100;
  cin = cont / 50;
  cont = cont % 50;
  dez = cont / 10;
  cont = cont % 10;
  cinco = cont / 5;
  um = cont % 5;
  printf("Notas de 100: %i \nNotas de 50: %i \nNotas de 10: %i \nNotas de 5: %i \nNotas de 1: %i", cem, cin, dez, cinco, um);
  getchar();
}