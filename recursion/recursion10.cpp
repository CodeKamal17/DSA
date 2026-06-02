//Reverse an array
//using single variable
#include<iostream>
#include<vector>
using namespace std;
void f(vector<int>& arr, int i, int n)
{
    if(i >= n/2)
    {
        return;
    }
    swap(arr[i], arr[n-i-1]);
    f(arr, i+1, n);
}
int main()
{
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;

    vector<int> arr(n); // or int arr[n];

    cout<<"Enter the array elements"<<endl;
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
    cout<<"Reverse array is: "<<endl;
    f(arr, 0, n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}