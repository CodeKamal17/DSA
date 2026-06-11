// Finding second smallest element optimal way

#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void secsmallestElement(vector <int> &arr, int n)
{
    int smallest = arr[0];
    int secsmallest = INT_MAX;

    for(int i = 0; i<n; i++)
    {
        if(arr[i] < smallest)
        {
            secsmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] > smallest && arr[i] < secsmallest)
        {
            secsmallest = arr[i];
        }
    }
    if (secsmallest == INT_MAX) 
    {
        cout << "None (all elements are equal)";
    } 
    else 
    {
        cout << secsmallest;
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

