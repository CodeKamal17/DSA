// smallest element in the array

#include<iostream>
#include<vector>
using namespace std;
void smallestElement(vector<int> &arr, int n)
{
    int smallest = arr[0];
    for(int i = 0; i<n; i++)
    {
        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    cout<<smallest;
}
int main()
{
    int size;
    cout<<"Enter array size: ";
    cin>>size;
    if (size < 0) return 0;

    vector<int> arr(size);
    cout<<"Enter array: "<<endl;
    for(int i = 0; i<size; i++)
    {
        cin>>arr[i];
    }

    cout<<"Smallest element in the array is: ";
    smallestElement(arr, size);

    return 0;

}