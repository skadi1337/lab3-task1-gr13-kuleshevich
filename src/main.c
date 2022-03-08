#include <stdio.h>

int is_lucky(int n)
{
  int first3 = 0,
      last3  = 0;

  for (int i = 0; i < 3; ++i, n/= 10)
  {
    last3 += n % 10;
  }

  for (int i = 0; i < 3; ++i, n/= 10)
  {
    first3 += n % 10;
  }

  
  return first3 == last3;
}

int main ()
{
  int n = 0;
  
	for (int i = 0; i < 1000000; ++i)
  {
    if (is_lucky(i))
    {
      printf("%d\n", i);
      ++n;
    }
  }

  printf("total of lucky numbers: %d\n", n);
  
  return 0;
}