 #include<iostream>
 using namespace std;
 void print1()
 {
 	for(int i=1; i<=5; i++)
 	{
 		for(int j=1; j<=i; j++)
		 {
		 	cout<<j<<" ";
		 }
		 cout<<endl;	
	}
 }
 int main()
 {
 	print1();
 	return 0;
 }
