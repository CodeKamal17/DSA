 #include<iostream>
using namespace std;
void print22(int n)
{
	for(int i=0; i<n; i++)
	{
		char ch='E';
		for(int j=i; j>=0; j--)
		{
			cout<<ch<<" ";
			ch--;
		}
		cout<<endl;
	}
}
int main()
{
	int n;
	cin>>n;
	print22(n);
	return 0;
}
