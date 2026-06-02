 #include<iostream>
 using namespace std;
 void print12(int n)
 {
 	for(int i=1; i<=n; i++) {
 		int start = 1;
 		(i%2==0)? start = 0: start = 1;
 		for(int j=1; j<=i; j++) {
 			cout<<start;
 			start = 1 - start;
		 }
		 cout<<endl;
	 }
 	
 }
 int main()
 {
 	int n;
 	cin>>n;
 	print12(n);
 	return 0;
 }
