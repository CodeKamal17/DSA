//Reverse an array
//using two variables
#include<iostream>
using namespace std;
void f(int arr[], int l, int r) // arr[] actually gets the memory address of original arr we initialize in main function
{
    if(l>=r) return;
    swap(arr[l], arr[r]);
    f(arr, l+1, r-1);
}
int main()
{
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: "<<endl;
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
    f(arr, 0, n-1);
     for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}