#include <stdio.h>
int
main()
  {
  int X;
  int Y;
  int Z;

  printf("Digite os Valores: ");
  scanf("%d %d %d", &X, &Y, &Z);

  if(((abs(X - Y) < Z) && (Z < (X + Y))) && ((abs(X - Z) < Y) && (Y < (X + Z))) && (abs(Y - Z) < X) && (X < (Y + Z)))
    {
    if((X == Y) && (Y == Z))
      {
      printf("Triangulo Equilatero\n");
      }
    if(((X != Y) && (Y != Z)) && (X != Z) && (X != Y))
      {
      printf("Tringulo Escaleno\n");
      }
    if((((X == Y) && (Y != Z))) || (((Y == Z) && (X != Z))) || ((X == Z) && (Y != X)))
      {
      printf("Tringulo Isosceles\n");
      }
    }
  else
    {
    printf("N e um triangulo");
    }
  return 0;
  }
