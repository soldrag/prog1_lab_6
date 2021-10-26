#include <stdio.h>
#include <math.h>

float res_sum (int i0, int lim_i, int var, int a3, int a2, int a1, int a0)
{
  int i, s;
  s = 0;
  for (i = i0; i <= lim_i; i++){
    s += a3*pow(var, 3) + a2*pow(var, 2) + a1*var + a0;
  }
  return s;
}

int main()
{
  float answer, numerator, denominator;
  int i, j, k, m, n, a3, a2, a1, a0;
  printf("Input, use space for separate vars \"i\" \"j\" \"k\" \"m\" \"n\": ");
  scanf("%d%d%d%d%d", &i, &j, &k, &m, &n);
  answer = (3 * res_sum(2, m, i, 0, 2, 0, 2) + 2 * res_sum(3, m, j, 1, 0, 0, 1))/(2 + res_sum(3, m, k, 2, 0, 1, 2));
  printf("Answer is: %.3f\n", answer);
  return 0;
}