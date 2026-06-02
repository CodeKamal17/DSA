   #include<iostream>
using namespace std;

void print25(int n)
{
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=i; j++)
		{
			cout<<"*";
		}
		for(int j=1; j<=2*n-2*i; j++)
		{
			cout<<" ";
		}
		for(int j=1; j<=i; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}

void print26(int n)
{
	for(int i=2; i<=n; i++)
	{
		for(int j=1; j<=n-i+1; j++)
		{
			cout<<"*";
		}
		for(int j=1; j<=2*i-2; j++)
		{
			cout<<" ";
		}
		for(int j=1; j<=n-i+1; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}	
}
int main()
{
	int n;
	cin>>n;
	print25(n);
	print26(n);
	return 0;
}
