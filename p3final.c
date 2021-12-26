
/*struct camel {
	float radius, height, length,weight;
};
typedef struct camel Camel;
Camel input(); /* do not take weight as input from the user */
/*float find_weight(Camel c); /* pass by value 
or 
void find_weight(Camel *c); passing address variable 
void output(Camel c);
and int main()
*/

#include <stdio.h>
#include <math.h>
#define PI 3.1415
struct camel {
  float radius,height,length,weight;
};
typedef struct camel Camel;

Camel Camel_input()
{   
  Camel c;
  printf("Enter the radius, height and length of the Camel\n");
  scanf("%f%f%f", &c.radius,&c.height,&c.length);
  return c;
}

void find_weight(Camel *c)
{ 
  //Camel c;
  //int weight;
  c->weight = PI*pow(c->radius,3)*sqrt(c->length*c->height);
  //return weight;
}

void output(Camel c)
{ 
  printf("The weight of the camel with radius %f, height %f and length %f is %f", c.radius,c.height,c.length,c.weight);
}

int main()
{ 
  Camel input = Camel_input();
  find_weight(&input);
  output(input);
}