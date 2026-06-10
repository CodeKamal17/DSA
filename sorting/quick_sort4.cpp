// Quick sort in C++
// descending order

#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for(int j = low; j<high; j++)
    {
        if(arr[j] >= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return (i+1);
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

// Driver code
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
 