#include<iostream>
#include<vector>
using namespace std;
vector<int> rotateleft(vector<int> &arr, int n)
{
    int temp = arr[0];
    for(int i=1; i<n; i++)
    {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    return arr;
}
int main()
{
    int n;
    cout<<"Enter the array size: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Array is: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    vector<int> rotated_arr = rotateleft(arr, n);
    cout<<"Rotated array is: "<<endl;
    for(int i=0; i<n; i++) {
        cout<<rotated_arr[i]<<" ";
    }
    cout<<endl;
   
    return 0;
}