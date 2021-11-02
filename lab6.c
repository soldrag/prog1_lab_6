#include <stdio.h>
#include <math.h>

float sum (int n0, int n1, int a3, int a2, int a1, int a0)
{
  float s = 0;
  for (int i = n0; i <= n1; i++){
    s += a3*pow(i, 3) + a2*pow(i, 2) + a1*i + a0;
  }
  return s;
}

int main()
{
  float y;
  int m, n, a3, a2, a1, a0;
  printf("Input m = ");
  scanf("%d", &m);
  printf("Input n = ");
  scanf("%d", &n);
  y = (3 * sum(2, n, 0, 1, 0, 2) + 2 * sum(3, m, 1, 0, 0, 1))/(2 + sum(3, m, 2, 0, 1, 2));
  printf("y = %.3f\n", y);
  return 0;
}