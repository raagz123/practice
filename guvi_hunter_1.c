#include<stdio.h>
int main(void)
{
	int reg[100],arr[50];
	int i,j,r,k=0,flag=0;;
	printf("Enter the number of registrations\n");
	scanf("%d",&r);
	for(i=0;i<r;i++)
	scanf("%d",&reg[i]);
	for(i=0;i<r;i++)
	{
	    for(j=0;j<k;j++)
	    {
	        if(reg[i]==reg[arr[j]])
	        {
	            flag=1;
	         }
	    }  
	    if(flag==1)
	    {
	        flag=0;
	         continue;
	    
	    }
		
		for(j=0;j<r;j++)
		{
			if(reg[i]==reg[j]&& flag==0)
			{
			 arr[k++]=i;
			 flag=1;
			  
			}
		}
		flag=0;
	}
	for(i=0;i<k;i++)
	   printf("Repeated numbers are:%d\n",reg[arr[i]]);
	
	return 0;
	
	
}  