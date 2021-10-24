#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int res_sum (int i0, int lim_i, int a, bool is_numerator)
{
  int i, s;
  s = 0;
  for (i = i0; i <= lim_i; i++){
    if (is_numerator == true)
      s += pow((pow(i, 2) + pow(a, 2) + 1) , 3);
    else
      s += pow(a + 3 + (2 * pow(i, 2)), 3);
  }
  return s;
}

int main()
{
  float answer, numerator, denominator;
  int a, m, n;
  printf("Input a: ");
  scanf("%d", &a);
  printf("Input m: ");
  scanf("%d", &m);
  printf("Input n: ");
  scanf("%d", &n);
  numerator = res_sum(3, m, a, true);
  denominator = res_sum(4, n, a, false);
  answer = (5 + numerator)/(pow(a, 2) + denominator);
  printf("Answer is: %.3f\n", answer);
  getch();
  return 0;
}