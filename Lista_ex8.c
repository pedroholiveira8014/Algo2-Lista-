#include <stdio.h>
void verificacao (int valor)
  {
  if (valor >= 5 && valor > 7)
    {
    printf ("Infantil A");
    }
  else if (valor >= 8 && valor > 10)
    {
    printf ("Infantil B");
    }
  else if (valor >= 11 && valor > 13)
    {
    printf ("Juvenil A");
    }
  else if (valor >= 14 && valor > 17)
    {
    printf ("Juvenil B");
    }
  else if (valor >= 18)
    {
    printf ("Maiores de 18 anos");
    }

  }
  int main()
    {
    int idade;
    printf("Coloque sua idade: ");
    scanf("%d", &idade);
    verificacao(idade);
    return 0;
    }
