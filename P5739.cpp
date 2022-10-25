#include<stdio.h>
long long multiply(long long n)
{
	if(n==1) return 1;
	else return n*multiply(n-1);
}
int main()
{
	long long n;
	scanf("%lld", &n);
	n=multiply(n);
	printf("%lld", n);
	return 0;
}
