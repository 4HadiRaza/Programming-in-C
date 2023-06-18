#include<stdio.h>
int f1(int a);
int main()
{
	int n;
	printf("Enter the limit: ");
	scanf("%d",&n);
	f1(n);
}
int f1(int a)
{
	if (a >= 2)
	{
		f1(a-1);
	}
	printf("%d ",a);
}

