#include<iostream>
#include<utility>
using namespace std;

int main()
{
	pair<int, int>  p1(1, 3); // or pair<int, int> p = {1,3};
	cout<<p1.first<<" "<<p1.second<<endl;
	
	pair<int, pair<int, int> > p2(1, make_pair(2, 3));
	cout<<p2.first<<" "<<p2.second.second<<" "<<p2.second.first;
	
	 pair<int, int> arr[] = { {1,2}, {2,3} };
	cout<<arr[1].second;
	
	//OR
	
	//
	
	
	return 0;
}


// pair is a container that stores two values together as a single unit
