#include<stdio.h>
int main()
{
    int arr[100],n,i,j,flag,temp;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<n;i++)//FOR SORTING THE ELEMENTS
    {
      for(j=i+1;j<n;j++)
      {
           if(arr[i]>arr[j]){
               temp=arr[i];
              arr[i]=arr[j];
              arr[j]=temp;
           }
      }
    }


    for(i=0;i<n;i+2)//FOR FINDING THE UNIQUE ELEMENT
    {
        flag=0;

        if(i==n-1)//IN ODD CASE,IF THE UNIQUE NUMBER IS AT LAST
            break;

        if(arr[i]==arr[i+1])
            flag=1;

        else
            break;
    }
    if(flag==0)
        printf("%d",arr[i]);

        return 0;

}
