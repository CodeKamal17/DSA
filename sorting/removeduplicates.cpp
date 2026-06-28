#include<iostream>
#include<vector>
using namespace std;
int removeDuplicates(vector<int> &arr, int n)
{
    int i = 0;
    for(int j = 1; j<n; j++)
    {
        if(arr[i] != arr[j])
        {
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
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
    int uniqueCount = removeDuplicates(arr, n);
    cout<<"New array is: "<<endl;
    for(int i=0; i<uniqueCount; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"Number of unique elements: "<<uniqueCount;
    return 0;
}