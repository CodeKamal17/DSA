//Largest element in the array

// ----> We can do it using the sorting mechanism i.e first sort in ascending and print last element which is largest or first sort in descending order and print first element

// But for optimal way, we can do this way:

#include<iostream>
#include<vector>
using namespace std;
int largestElement(vector <int> &arr, int n)
{
    int largest = arr[0];
    for(int i = 0; i<n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
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

    cout<<"Largest element in the array is: "<<largestElement(arr, size)<<endl;
    return 0;

}