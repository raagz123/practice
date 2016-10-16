include <stdio.h>

int del_one(int data[], int i, int n)
{
	int prev = -1;
	int prev_i;

	for (; i < n; i++) {
		if (data[i] == -1)
			continue;
		if (prev == -1) {
			prev_i = i;
			prev = data[i];
			continue;
		}
		if (data[i] < prev)
			break;
		prev_i = i;
		prev = data[i];
	}

	data[prev_i] = -1;

	return prev_i;
}

void print_data(int data[], int n)
{
	int i;

	for (i = 0; i < n; i++)
		if (data[i] != -1)
			printf("%d", data[i]);
	printf("\n");
}

void least_number(int data[], int n, int k)
{
	int i = 0;

	while (k-- > 0) {
		i = delete_one(data, i, n);
		if (i == 0)
			i = 1;
		else
			i--;
	}
}

int main()
{
	int data[] = {2, 4, 6, 3, 5};
	int n = 5;
	int k = 3;

	print_data(data, n);
	least_number(data, n, k);
	print_data(data, n);

	return 0;
}
