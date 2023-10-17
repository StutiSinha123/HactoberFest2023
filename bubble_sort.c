#include <stdio.h>
int main()
{
    int n,k;
    printf("Enter the value of n");
     scanf("%d",&n);
    int arr[n],temp;
    printf("Enter the data values");
    for(k=0;k<n;k++)
     scanf("%d",&arr[k]);
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;i<n-i-1;j++)
         if(arr[j]>arr[j+1])
         {
          temp=arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=temp;
         }
    }
     for(k=0;k<n;k++)
       printf("\t %d \t" ,arr[k]);
    return 0;
}
