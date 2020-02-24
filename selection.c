#include<stdio.h>


int main()
{

int a[5] = {5,4,1,2,3};
int n = 5,i=0,j=0;
int min = 0;

for(i=0;i<n;i++)
{
  min = i;
  for(j=i+1;j<n;j++)
  {
    if(a[j]<a[min])
    {
      min = j;
    }
//    printf("\n min: %d", min);
  }
   int temp = a[i];
   a[i] = a[min];
   a[min] = temp;
}

for(i=0;i<n;i++)
{
  printf("%d \t",a[i]);
}

return 0;
}
