// merge sort -- descending order


#include<iostream>
#include<vector>
using namespace std;

int i;

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left <= mid && right <= high)
    {
        if(arr[left] >= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for(i = low; i<=high; i++)
    {
        arr[i] = temp[i - low];
    }

}

void mergeSort(vector<int> &arr, int low, int high)
{
    if(low >= high)
    {
        return;
    }
    else{
        int mid = (low + high)/2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}

int main()
{
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    if(size<0) return 0;

    vector<int> arr(size);
    cout<<"Enter array:"<<endl;
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    cout<<"Array is: ";
    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int first_idx = 0;
    int last_idx = (size - 1);
    mergeSort(arr, first_idx, last_idx);

    //printing the sorted array of descending order
    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}