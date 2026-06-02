 #include<iostream>
using namespace std;
void print27(int n)
{
	int i, j;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			(i==0 || i==n-1 || j==0 || j==n-1)? cout<<"*": cout<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	int n;
	cin>>n;
	print27(n);
	return 0;
}
