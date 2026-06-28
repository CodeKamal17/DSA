// Finding second largest element optimal way

#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void seclargestElement(vector <int> &arr, int n)
{
    int largest = arr[0];
    int seclargest = INT_MIN;

    for(int i = 0; i<n; i++)
    {
        if(arr[i] > largest)
        {
            seclargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > seclargest)
        {
            seclargest = arr[i];
        }
    }
    if (seclargest == INT_MIN) 
    {
        cout << "None (all elements are equal)";
    } 
    else 
    {
        cout << seclargest;
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

