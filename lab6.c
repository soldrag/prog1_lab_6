#include <stdio.h>
#include <math.h>

int res_sum (int i0, int lim_i, int a, int formula)
{
  int i, s;
  s = 0;
  for (i = i0; i <= lim_i; i++){
    switch (formula) {
      case 1: s += pow((pow(i, 2) + pow(a, 2) + 1) , 3);
      case 2: s += pow(a + 3 + (2 * pow(i, 2)), 3);
    }
  }
  return s;
}

int main()
{
  float answer, numerator, denominator;
  int a, m, n;
  printf("Input, use space for separate vars \"a\" \"m\" \"n\": ");
  scanf("%d%d%d", &a, &m, &n);
  numerator = res_sum(3, m, a, 1);
  denominator = res_sum(4, n, a, 2);
  answer = (5 + numerator)/(pow(a, 2) + denominator);
  printf("Answer is: %.3f\n", answer);
  getch();
  return 0;
}