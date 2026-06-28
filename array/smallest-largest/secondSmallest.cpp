// Finding second smallest element better way

#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void secsmallestElement(vector <int> &arr, int n)
{
    int smallest = arr[0];
    for(int i = 0; i<n; i++)
    {
        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    int secsmallest = INT_MAX;
    bool found = false;

    for(int i = 0; i<n; i++)
    {
        if(arr[i] < secsmallest && arr[i] != smallest)
        {
            secsmallest = arr[i];
            found = true;
        }
    }

    if (found) 
    {
        cout<<secsmallest;
    } 
    else 
    {
        cout<<"None(all elements are equal)";
    }
    
}
int main()
{
    int size;
    cout<<"Enter array size(>1): ";
    cin>>size;
    

    vector<int> arr(size);
    cout<<"Enter array: "<<endl;
    for(int i = 0; i<size; i++)
    {
        cin>>arr[i];
    }

    cout<<"Second smallest element in the array is: ";
    secsmallestElement(arr, size);
    return 0;

}