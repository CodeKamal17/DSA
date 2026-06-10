// Quick Sort ---> divide and conquer

// Quick Sort --> descending order

#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j)
    {
        while(arr[i] >= pivot && i <= high-1)
        {
            i++;
        }

        while(arr[j] <= pivot && j >= low+1)
        {
            j--;
        }

        if(i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pIndex = partition(arr, low, high);
        quickSort(arr, low, pIndex-1);
        quickSort(arr, pIndex+1, high);
    }
}

int main()
{
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    vector<int> arr(size);
    cout<<"Enter the array: "<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    cout<<"Array is: ";
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int low = 0;
    int high = (size - 1);
    cout<<"Sorted array in descending order"<< endl;
    quickSort(arr, low, high);
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}