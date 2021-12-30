/*
void input(int n, int a[n]); float odd_average(int n, int a[n]); void output(int n, int a[n]); / print all the elements of the array and then the average / and main.
*/

#include <stdio.h>

int arrayLength()
{ 
 int a;
 printf("Enter the number of elements\n");
 scanf("%d", &a);
 return a;
}

void array_(int n, int a[n])
{
 printf("Enter the elements of array\n");
 for (int i=0;i<n;i++)
 {
   scanf("%d", &a[i]);
 }
}

float odd_average(int n, int a[n])
{ 
  int sum=0;float average;
  {
  for(int i=0; i<n; i++)
    {
     if(a[i] % 2 != 0)
     {
        sum += a[i];
        average = sum/sizeof(a[i]);
     }    
    }
  }
  return average;
}

void output(int n, int a[n],float average)
{ 
  int i;
  printf("The average of odd values in the array\n");
  
  if(a[n] % 2 != 0)
  {
  for(int i=0;i<n-1;i++)
  {
    if(i % 2 != 0)
    {
      printf("%d+",a[i]);
    }
  }printf("%d=%f",a[n-1], average);

  }}
  // else
  // {
  //   for (int i=0;i<n;i++)
  //   {
  //     if(i % 2 != 0)
  //     { 
  //       printf("%d+",a[i]);
  //     }
  //   }
  //   for (int i = 0; i > n; i++)
  //   printf("%d=%f",a[n-1],average);
  // }
//}

int main()
{
  int a;
  a=arrayLength();
  int b[a];
  array_(a,b);
  float c=odd_average(a,b);
  output(a,b,c);
}