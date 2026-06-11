// Bruteforce method for second largest element
// first we sorted the array in ascending order
// then we find the largest and finally second largest one

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
        while(arr[i] <= pivot && i <= high-1)
        {
            i++;
        }

        while(arr[j] >= pivot && j >= low+1)
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

// for finding the secondlargest element
void secLargestElement(vector<int> &arr, int n)
{
    int largest = arr[0];
    int secLargest;

    //finding the largest one
    for(int i = 0; i<n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    //finding the second largest one
    for(int i = n-2; i>=0; i--)
    {
        if(arr[i] != largest)
        {
             secLargest = arr[i];
             break;
        }
    }
    
    cout<<secLargest;
}

int main()
{
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    if (size < 0) return 0;

    vector<int> arr(size);
    cout<<"Enter the array: "<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    int low = 0;
    int high = (size - 1);
    quickSort(arr, low, high); // for sorting we do quicksort
    
    cout<<"Second largest element is: ";
    secLargestElement(arr, size);

    cout<<endl;
    return 0;
}