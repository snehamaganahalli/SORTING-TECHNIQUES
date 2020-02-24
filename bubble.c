#include<stdio.h>

int main()
{

int a[5] = {5,4,1,2,3};
int n=5;
int i=0,j=0;

for(i=0; i<n; i++)
{
  for(j=0;j<n; j++)
  {
    if(a[j+1]<a[j])
    {
      int temp = a[j+1];
      a[j+1] = a[j];
      a[j] = temp;
    }
  }
}

for(i=0 ;i<n; i++)
{
  printf("%d\t ", a[i]);
}

return 0;
}
