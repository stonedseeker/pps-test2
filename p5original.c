#include <stdio.h>


int input()
{
  int x;
  printf("Enter the value of x\n");
  scanf("%d", &x);
  return x;
}

float borga_x(int x)
{
  float total = 1, next, prev=1;
  for (int i=1; prev > 0.000001; i+=2)
  {
    next = prev * x/((i+1)*(i+2));
    total += next;
    prev = next;
  }
  return total;
}

void output(int x, float borga)
{
  printf("The borga of %d is %f\n",x,borga);
}

int main()
{
  int a=input();
  float borga = borga_x(a);
  output(a,borga);
  return 0;
}