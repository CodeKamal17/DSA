#include<iostream>
using namespace std;
void print19(int n)
{
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n-i; j++)
		{
			cout<<" ";
		}
		
		char ch = 'A';
		for(int j=0; j<2*i+1; j++)
		{
			cout<<ch;
			
		}
		
		for(int j=0; j<n-i; j++)
		{
			cout<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	int n;
	cin>>n;
	print19(n);
	return 0;
}
