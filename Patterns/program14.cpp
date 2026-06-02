 #include<iostream>
 using namespace std;
 void print(int n)
 {
 	int spaces = 2*(n-1);
 	for(int i=1; i<=n; i++)
 	{
 		//numbers
 		for(int j=1; j<=i; j++)
 		{
 			cout<<j;
		 }
		 
		 //spaces
		 for(int j=1; j<=spaces; j++)
		 {
		 	cout<<" ";
		 } 
		 
// or simply i can use this loop without making space variable
//		for(int j=1; j<=2*n-2*i; j++)
//		{
//			cout<<" ";
//		}
		 
		//numbers
 		for(int j=i; j>=1; j--)
 		{
 			cout<<j;
		 }
		 cout<<endl;
		 spaces-=2;
	 }
 }
 int main()
 {
 	int n;
 	cin>>n;
 	print(n);
 	return 0;
 }
