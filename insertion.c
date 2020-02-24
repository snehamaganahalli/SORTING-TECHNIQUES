#include<stdio.h>


int main()
{

int a[5] = {5,4,1,2,3};
int i=0,j=0;
int n = 5;

  /* think 1st ele as the sorted*/
  for(i=1;i<n;i++)
  {
    int j = i-1;
    int temp = a[i];
    int pos = i;
    while(j>=0 && temp< a[j])
    {
      a[j+1] = a[j];
      j--;
    }
    a[j+1] = temp;
  }

for(i=0;i<n;i++)
{

  printf("%d\t", a[i]);

}

return 0;
}
