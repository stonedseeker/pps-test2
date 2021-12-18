#include <stdio.h>
#include <math.h>
void input(int *x1,int *y1,int *x2,int *y2)
{
  printf("Enter coordinates of point one\n");
  scanf("%d%d",x1,y1);
  printf("Enter coordinates of point two\n");
  scanf("%d%d",x2,y2);
}

void distance(int x1,int y1,int x2,int y2,int *distance)
{
  *distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}

void output(int x1,int x2,int y1,int y2,int result)
{
  printf("The distance between (%d,%d) and (%d,%d) is %d\n",x1,y1,x2,y2,result);
}

int main()
{
  int x1,x2,y1,y2,result;
  input(&x1,&y1,&x2,&y2);
  distance(x1,y1,x2,y2,&result);
  output(x1,y1,x2,y2,result);
}