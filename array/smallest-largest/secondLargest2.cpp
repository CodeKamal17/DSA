// Finding second largest element better way

#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void seclargestElement(vector <int> &arr, int n)
{
    int largest = arr[0];
    for(int i = 0; i<n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    int seclargest = INT_MIN;
    bool found = false;

    for(int i = 0; i<n; i++)
    {
        if(arr[i] > seclargest && arr[i] != largest)
        {
            seclargest = arr[i];
            found = true;
        }
    }

    if (found) 
    {
        cout<<seclargest;
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

    cout<<"Second largest element in the array is: ";
    seclargestElement(arr, size);
    return 0;

}