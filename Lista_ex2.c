#include <stdio.h>
void mostrar_texto (char texto[])
  {
  printf ("%s", texto);
  return;
  }

  int main()
  {
  char texto[100];
  printf ("Coloque seu texto: ");
  scanf ("%s", texto);
  mostrar_texto(texto);
  return 0;
  }

