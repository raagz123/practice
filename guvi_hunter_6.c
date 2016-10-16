 #include <stdio.h>

int main(void) {

	int t,i,max=0;
	int arr[100],hash[1000]={0};
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&arr[i]);
		if(max<arr[i])
			max=rra[i];
	}
	for(i=0;i<=max;i++)
		hash[arr[i]]++;
	for(i=0;i<=max;i++)
	{
			if(hash[i]>1)
			{
				printf("%d",i);
			break;
			}
	}
	return 0;
}
