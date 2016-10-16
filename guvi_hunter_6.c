 #include <stdio.h>

int main(void) {

	int t,i,max=0;
	int a[100],hash[1000]={0};
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&a[i]);
		if(max<a[i])
			max=a[i];
	}
	for(i=0;i<=max;i++)
		hash[a[i]]++;
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
