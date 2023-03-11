#include <stdio.h>

int main(void)
{
  int n;
  int a[7];
  int *p;

  a[3] = 1024;
  p = &n;
  *(p + 7) = 98;
  /* ...so that this prints 98\n */
  printf("a[3] = %d\n", a[3]);
  return (0);
}
