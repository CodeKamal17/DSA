  #include<iostream>
 using namespace std;
 void print7(int n)
 {
 	
 	for(int i=1; i<=n; i++)
 	{
 		for(int j=1; j<=n-i; j++)
 	   	{
 			cout<<" ";
		}
		
 		for(int j=1; j<=2*i-1; j++)
 		{
 			cout<<"*";
		 }
		 
		 for(int j=1; j<=n-i; j++)
 	   	{
 			cout<<" ";
		}
		cout<<endl;
	 }
 }
 void print8(int n)
 {
 	
 	for(int i=2; i<=n; i++)
 	{
 		for(int j=2; j<=i; j++)
 	   	{
 			cout<<" ";
		}
		
 		for(int j=1; j<=2*n-(2*i-1); j++)
 		{
 			cout<<"*";
		 }
		 
		 for(int j=1; j<=i; j++)
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
 	print7(n);
 	print8(n);
 	return 0;
 }
