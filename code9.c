#include <stdio.h>
int main ()
{
  int a = 20;
  printf("Type a number");
  scanf("%d",&a);
  if (a>0)
  {
      printf("positive");
  }
  else
  {
      printf("negative");
  }
  return 0;
}
