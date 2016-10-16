#include <stdio.h>

void main ()
{
    int num[30];
	int big
    int i, j, a, n;

    printf("Enter the value of N\n");
    scanf("%d", &n);
    printf("Enter the numbers \n");
    for (i = 0; i < n; ++i)
    scanf("%d", &num[i]);

    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (num[i] < num[j])
            {
                a = num[i];
                num[i] = num[j];
                num[j] = a;
            }
        }
    }

	j=0;

	printf("The numbers arranged in descending order are given below\n");
    for (i = n-1; i >=0; i--)
    {
	      big+=num[i]*10^(j);

		j++;
	}

	printf("The largest possible number is %d",big);

}
