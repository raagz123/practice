#include<stdio.h>
int main()
{
    int a[100],n,i,j,flag,temp;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)//FOR SORTING THE ELEMENTS
    {
      for(j=i+1;j<n;j++)
      {
           if(a[i]>a[j]){
               temp=a[i];
              a[i]=a[j];
              a[j]=temp;
           }
      }
    }


    for(i=0;i<n;i+2)//FOR FINDING THE UNIQUE ELEMENT
    {
        flag=0;

        if(i==n-1)//IN ODD CASE,IF THE UNIQUE NUMBER IS AT LAST
            break;

        if(a[i]==a[i+1])
            flag=1;

        else
            break;
    }
    if(flag==0)
        printf("%d",a[i]);

        return 0;

}
