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
    if (n < 2) {
        cout << "Array needs at least 2 elements.";
        return;
    }

    //finding the largest one

    /*
    int largest = arr[0];
    for(int i = 0; i<n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    */

    int largest = arr[n-1]; // since we already did sort the array 

    //finding the second largest one

    int secLargest = -1; // Initialize with a default flag value
    bool found = false;

    for(int i = n-2; i>=0; i--)
    {
        if(arr[i] != largest)
        {
             secLargest = arr[i];
             found = true;
             break;
        }
    }
    
    if (found) 
    {
        cout << secLargest;
    } 
    else 
    {
        cout << "None (all elements are equal)";
    }
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