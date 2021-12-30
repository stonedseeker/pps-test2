/*Strings
Write a program to find if the name of the camel is a nice name.
Camels name is nice if it has at least 2 vowels and 2 consonants in it.
with four functions*/

#include <stdio.h>

struct _camel
{
  float radius, height, length;
  char name[50];
};

typedef struct _camel Camel;

Camel input()
{
  Camel c;
  printf("Enter the name of the camel\n");
  scanf("%s", c.name);
  return c;  
}

int vovels(char c)
{
  if(c == 'A' || c=='E' || c == 'I' || c == 'O' || c=='U'|| c=='a' || c=='e' || c=='i' || c=='o'|| c=='u')
  
  {
    return 1;
  }
  else 
  { 
    return 0;
  }
}

int nice_name(Camel c)
{
  int vovel = 0;
  int consonant = 0;
  int i;
  for(i=0; c.name[i]; i++)
  {
    if(vovels(c.name[i]))
    {
      vovel++;
    }
    else 
    {
      consonant++;
    }
  }

  if (vovel >=2 && consonant >=2)
  {
    return 1;
  }
    else 
    {
      return 0;
    }
}

void output(Camel c, int name)
{
  if(name == 1)
  {
    printf("%s is a nice name\n",c.name);
  }

  if(name == 0)
  {
    printf("%s? bleh!\n",c.name);
  }
}

int main()
{ 
  Camel c;
  c = input();
  int nice = nice_name(c);
  output(c,nice);  
}