#include <stdio.h>
struct camel{
  float radius, height,length;
  int mood;
}; typedef struct camel Camel; 

Camel Cinput()
{ 
  Camel c;
  printf("Enter the radius, height and length of the camel\n");
  scanf("%f%f%f",&c.radius,&c.height,&c.length);
  return c;
}

void Camel_mood(Camel *c)
{
  if(c->radius < c->height && c->radius < c->length)
  {
    c->mood = 0;
  }
  else if (c->height < c->length && c->height < c->radius)
  {
    c->mood = 1;
  }
  else if (c->length < c->height && c->length < c->radius)
  {
    c->mood = 2;
  }
  else printf("Camel shit");
}

void output(Camel c)
{

  // printf("%s\n", Camel_mood()
  /*if(c.mood == 0)
  {
    printf("Camel is sick\n");
  }
  else if(c.mood == 1)
  {
    printf("Camel is happy\n");
  }
  else if(c.mood == 2)
  {
    printf("Camel is tense\n");
  }  */


  
}

int main()
{
  Camel input = Cinput();
  Camel_mood(&input);
  output(input);
}