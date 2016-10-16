
#include <stdio.h>

int main(void) {
	// your code goes here
int a1[20],a2[20];
	int i=0,j=0,n,k,c=0;
	scanf("%d",&k);
	scanf("%d",&n);
	for(i=0;i<k;i++)
	{
		scanf("%d",&a1[i]);
	}
	for(i=0;i<n;i++)
	{

		scanf("%d",&a2[i]);
	}

for(i=0;i<k;i++)
{
 for(j=0;j<n;j++)
 {
  if(a1[i]==a2[j])
 {
 	c++;
 }
 }
}
//printf("%d",c);
if(c==k)
{
printf("a is a subset of b ");
}
else
{
printf("a is not a subset of b");
}

	return 0;
}
