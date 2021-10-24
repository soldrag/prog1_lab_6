#include <stdio.h>
#include <math.h>

int sum_numerator (int m, int a)
{
  int s, i;
  s = 0;
  for (i=4; i <= m; i++)
    s += pow((pow(i, 2) + pow(a, 2) + 1) , 3);
  return s;
} 

int sum_denominator ()
{
  return 0;
}

int main()
{
  int answer;
  answer = sum_numerator(6, 3);
  printf("%d", answer);
}