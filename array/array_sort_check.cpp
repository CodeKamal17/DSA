#include<iostream>
#include<vector>
using namespace std;
bool isSorted(int n, vector<int> &arr)
{
    for(int i = 1; i<n; i++)
    {
        if(arr[i] >= arr[i-1])
        {

        }
        else {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    
    vector<int> arr(n);
    cout<<"Enter array: "<<endl;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Array is: "<<endl;
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    if(isSorted(n, arr)) 
    {
        cout<<"Array is sorted";
    }
    else
    {
        cout<<"Array is not sorted";
    }
    return 0;

}