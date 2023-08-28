#include <stdio.h>
void sl()
{
  printf("Smile!");
}
int main()
{
  for (int i = 0; i < 3; i++)
  {
    for (int j = 3; j > i; j--)
    {
      sl();
    }
    printf("\n");
  }
  return 0;
}