#include <stdio.h>
int main (){
  float n1, n2, perimetro, area;
  printf("Digite o valor da base: ");
  scanf("%f", &n1);
  printf("Digite o valor da altura: ");
  scanf("%f", &n2);

  perimetro = (2*n1) + (2*n2);
  area = n1*n2;

  if (perimetro > area)
  {
  printf("O perimetro %.1f eh maior que a area %.1f", perimetro, area);
  }
  else if (perimetro == area)
  {
   printf("O perimetro %.1f eh igual a area %.1f", perimetro, area);
  }
  else
  {
    printf("A area %.1f eh maior que o perimetro %.1f", area, perimetro);
  }
  return 0;

}
