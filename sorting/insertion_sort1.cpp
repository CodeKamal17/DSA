// sorting array in ascending order using insertion sort
#include<iostream>
using namespace std;
void insertion_sort(int arr[], int n)
{
    for(int i = 0; i<=n-1; i++)
    {
        int j = i;
        while(j>0 && arr[j-1]>arr[j])
        {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;

            j--;
        }
    }
}
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array: " << endl; 
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout << "Sorted array in ascending order" << endl;
    insertion_sort(arr, n);
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}