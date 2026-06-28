// Left rotate array by k places
#include<iostream>
#include<vector>
using namespace std;
vector<int> rotateleft(vector<int> &arr, int n, int d)
{
    int temp[d];
    for(int i=0; i<d; i++)
    {
        temp[i] = arr[i];
    }

    for(int i=d; i<n; i++)
    {
        arr[i-d] = arr[i];
    }

    for(int i=n-d; i<n; i++)
    {
        arr[i] = temp[i-(n-d)];
    }
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

    int d;
    cout<<"Enter the number of places by which you want to rotate array: ";
    cin>>d;
    
    cout<<"Rotated array is: "<<endl;
    vector<int> rotated_arr = rotateleft(arr, n, d);
    for(int i=0; i<n; i++) {
        cout<<rotated_arr[i]<<" ";
    }
    cout<<endl;
   
    return 0;
}