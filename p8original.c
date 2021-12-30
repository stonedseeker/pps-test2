/*float input_truck_weight();
int input_no_camels();
void input_camel_details(int n, Camel c[n]);
float comput_total_weight(int n, Camel c[n], float truck_weight);
void ouput(float total_truck_weight);
and 
int main()*/

#include <stdio.h>
#include<math.h>
#define PI 3.1415


struct _camel
{
  float radius, height, length, weight;
};
typedef struct _camel Camel;

int input_no_camels()
{
 int number;
 printf("Enter the number of camels\n");
 scanf("%d",&number);
 return number;
}

Camel camel_input()
{
  Camel c;
  printf("Enter the radius, height and length of the camel\n");
  scanf("%f%f%f",&c.radius,&c.height,&c.length);
  return c;
}

void array_(int n, Camel d[n])
{
 for(int i=0;i<n;i++)
 {
   d[i] = camel_input();
 }
}

float input_truck_weight()
{
  float truckWeight;
  printf("Enter the weight of the truck\n");
  scanf("%f",&truckWeight);
  return truckWeight;
}

float find_weight(int a, Camel *c)
{ 
 c->weight= PI*pow(c->radius,3)*sqrt(c->length*c->height);
 return c->weight;
}

float weight_n_camels(int n,Camel c[n])
{ 
 float weight = 0;
 for(int i=0;i<n;i++)
 {
   weight += find_weight(n,&c[i]);
 }
 return weight;
}

float compute_total_weight(int n, Camel c[n], float truck_weight)
{
 float total_weight = truck_weight + weight_n_camels(n,c);
 return total_weight;
}

void output(float total_truck_weight)
{
  printf("The total weight of camels and the truck is %f\n",total_truck_weight);
}

int main()
{
  int a,e;
  float f;
  a=input_no_camels();
  e=input_truck_weight();
  Camel b[a];
  array_(a,b);
  f=compute_total_weight(a,b,e);
  output(f);
}