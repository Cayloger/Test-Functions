//求一元二次方程的根
// 例如 ：y = x2 + 10x + 17
// 当 x = 2, 求 y = 41
// 当 y = 2, 求 x = ? 
#include <stdio.h>
#include <math.h>
int main() {
  float x1, x2;
  float y, a, b, c;
  printf("请输入系数：\n");
  scanf("%f, %f, %f, %f", &y, &a, &b, &c);
  c =  c - y;
  a = 2 * a;
  float temp = sqrt(b*b - 4* a*c);
  x1 = (-b + temp)/(a);
  x2 = (-b - temp)/(a);
  printf("一元二次方程根：\n");
  printf("%f\n", x1);  //这是做什么？ 
  printf("%f\n", x2);
  return 0;
} 
