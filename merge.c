#include<stdio.h>

void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
 
int n = n1+n2; 
    /* create temp arrays */
    int L[n1], R[n2]; 
  
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
  for (k=l;i<n1 && j <n2;k++)
  {
    if(L[i]<R[j])
    {
      arr[k] = L[i];
      i++;
    }
    else
    {
      arr[k] =R[j];
      j++;
    }
  }

#if 0
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    }
#endif 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 

merge_arrays(int a[], int low, int mid, int high)
{
    
int nL = mid - low +1 ;
int nR = high - mid;
int n = nL+nR;

printf("\n ========= nL: %d nR: %d n: %d ================== \n", nL, nR, n);

int L[nL];
int R[nR];

  int i,j;

for (i = 0; i < nL; i++) 
  L[i] = a[low + i]; 
for (j = 0; j < nR; j++) 
  R[j] = a[mid + 1+ j]; 


   j = 0; // Initial index of second subarray 
   int k = 0; // Initial index of merged subarray 

#if 0
  for (i=low;i<n;i++)
  {
    if(L[j]<R[k])
    {
      a[i] = L[j];
      j++;
    }
    else
    {
      a[i] =R[k];
      k++; 
    }
    printf("a[%d]: %d \t",i, a[i]);
  }

#endif

 while(j < nR)
 {
   a[i++] = L[j++];
    printf("a[%d]: %d \t ",i, a[i]);
 }
 while(k < nR)
 {
   a[i++] = R[k++];
 }

}

merge_sort(int a[],int low, int high)
{
 if(low < high)
 {
   int mid = (low+high)/2;
   merge_sort(a, low, mid);
   merge_sort(a, mid+1, high);
   merge(a,low,mid,high );
 }
}

int main()
{

int a[100] = {5,4,3,2,1};
//int L[5] = {1,2,3,4,5};
//int R[5] = {6,7,8,9,10};

merge_sort(a, 0, 4);

#if 1
int i;
 for(i=0;i<5;i++)
 {
   printf("%d\t", a[i]);
 }
#endif
//merge_arrays(L,R,a,10,5,5);
//int n = 5;

return 0;
}
