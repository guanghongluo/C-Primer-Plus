#include <stdio.h>
#include <math.h>
int main()
{
  int toes = 10;
  printf("The value of toes is %d\n", toes);
  printf("The value of toes is %d\n", toes * 2);
  // C 库函数 double pow(double x, double y) 返回 x 的 y 次幂
  // round函数四舍五入取整,返回一个double类型
  printf("The value of toes squared is %d\n", (int)round(pow(toes, 2))); 
  return 0;
}