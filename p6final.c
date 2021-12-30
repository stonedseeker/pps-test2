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

void input_numbers(int n, int a[n])
{
 printf("Enter the elements of array\n");
 for (int i=0;i<n;i++)
 {
   scanf("%d", &a[i]);
 }
}

float odd_average(int n, int a[n])
{ 
  int sum=0, count=0;
  float average; 
  {
  for(int i=0; i<n; i++)
    {
     if(a[i] % 2 != 0)
     {
        sum += a[i];
        count +=1;
     }    
    }
  }
  average = sum/count;
  return average;
}
void output(int n, int a[n],float average)
{
  printf("The average of odd values in the array\n");
  for(int i=0;i<n-1;i++)
  {
    if(a[i] % 2 != 0)
    {
      printf("%d+",a[i]);
    }
  }
  for(int i) 
  printf("%d=%f\n",a[n-1], average);

  }

}

int main()
{
  int a;
  a=arrayLength();
  int b[a];
  input_numbers(a,b);
  float c=odd_average(a,b);
  output(a,b,c);
}