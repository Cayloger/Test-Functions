#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string c;
	cin>>c;
	int n;
	n=sizeof(c);
	for(int i=0;i<n;i++)
	{
		if(c[i]>=97&&c[i]<=122)
			c[i]-=32;
	}
	cout<<c;
	return 0;
}
