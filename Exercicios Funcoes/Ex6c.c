#include <stdio.h>
void imprimeVencedor(int resto)
{
  if (resto == 0)
  {
    printf("Alexandre ganhou");
  }
  if (resto == 1)
  {
    printf("Maria ganhou");
  }
  if (resto == 2)
  {
    printf("Rafael ganhou");
  }
}
int retornaResto(int alexandre, int maria, int rafael)
{
  int resultado;
  resultado = (alexandre + maria + rafael)%3;
  return resultado;
}

int main()
{
  int n1, n2, n3, resto;

  printf("Informe quanto Alexandre joga: ");
  scanf("%d", &n1);
  printf("Informe quanto Maria joga: ");
  scanf("%d", &n2);
  printf("Informe quanto Rafael joga: ");
  scanf("%d", &n3);

  resto = retornaResto(n1, n2, n3);
  imprimeVencedor(resto);
  return 0;
}
