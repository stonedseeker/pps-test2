#include <stdio.h>
#include<math.h>
#define PI 3.1415

void input_camel_details(float *radius, float *height, float *length)
{
  printf("Enter the radius of the camel\n");
  scanf("%f",radius);
  printf("Enter the height of the camel\n");
  scanf("%f",height);
  printf("Enter the length of the camel\n");
  scanf("%f",length);
}

float find_weight(float radius, float height, float length)
{
  float weight;
  weight = PI * pow(radius,3) * sqrt(height*length);
  return weight;
}

void output(float radius, float height, float length, float weight)
{
  printf("The weight of the camel of radius %f, height %f and length %f is %f\n",radius,height,length,weight);
}
int main()
{
  float radius,length,height,weight;
  input_camel_details(&radius,&length,&height);
  weight=find_weight(radius,length,height);
  output(radius,length,height,weight);
}