#include<stdio.h>
int main()
{ int arr1[]={34,22,55,23};
  int arr2[]={94,33,56,32};
  int i,temp;
  printf("Array1= ");
  for(i=0;i<4;i++)
  {
    temp=arr1[i];
    arr1[i]=arr2[i];
    arr2[i]=temp;
    printf("%d ",arr1[i]);
  }
  printf("\nArray2= ");
for(i=0;i<4;i++)
{
    printf("%d ",arr2[i]);
}
    return 0;
}
