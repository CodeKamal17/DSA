// Quick sort in C++
// ascending order

#include <iostream>
#include <vector>
using namespace std;

// function to rearrange array (find the partition point)
int partition(vector<int> &arr, int low, int high)
 {
    
    // select the rightmost element as pivot
     int pivot = arr[high];
  
      // pointer for greater element
    int i = (low - 1);

    // traverse each element of the array
    // compare them with the pivot
     for (int j = low; j < high; j++) {
      if (arr[j] <= pivot) {
        
        // if element smaller than pivot is found
         // swap it with the greater element pointed by i
         i++;
      
        // swap element at i with element at j
        swap(arr[i], arr[j]);
        }
     }
  
  // swap pivot with the greater element at i
  swap(arr[i + 1], arr[high]);
  
  // return the partition point
  return (i + 1);
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
    if (size < 0) return 0;

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
    cout<<"Sorted array in ascending order"<< endl;
    quickSort(arr, low, high);
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
 