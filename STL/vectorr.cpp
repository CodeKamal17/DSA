#include<iostream>
#include<vector>
using namespace std;
int main()
{
	// declares an empty vector
	vector<int> v1;
	
	//declares vector with given size and fills it with a value
	vector<int> v2(3,5);
	
	
//	for(int x: v2)       this is range based loop introduced in c++11
//	{
//		cout<<x<<" ";
//	}

	for(int i = 0; i < v2.size(); i++)
  	  {
        cout << v2[i] << " ";
      }
		cout<<endl;
	
	
	
}
