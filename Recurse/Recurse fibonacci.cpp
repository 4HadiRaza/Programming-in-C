#include<stdio.h>
int f1(int i);
main()
{
	int n, i;
	printf("Enter the limit: ");
	scanf ("%d",&n);
	for(i = 0; i <= n - 1; i++)
	{
	printf ("%d ", f1(i));
    }
}
f1(int n)
{
	if(n==1||n==0)
	{
		return n;
	}
	return f1(n-1)+f1(n-2);
}

