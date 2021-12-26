#include <stdio.h>
#include <math.h>
float input()
{
  float a;
  printf("Enter a value\n");
  scanf("%f",&a);
  return a;
}

float borga_x(int x)
{   
  float borga;
  float prev_term=0;
  for(int i=0;prev_term<0.000001;i++)
  {
   borga= pow(x,i)/(i+ prev_term+2);
   prev_term ++;
  }

  return borga+1;
}

void output(float x, float borga)
{
  printf("The borga_x of %f is %f\n",x,borga);
}

int main()
{
  float x, borga;
  x=input();
  borga = borga_x(x);
  output(x,borga);
}