// sorting array in descending order using bubble sort
#include<iostream>
using namespace std;
void selection_sort(int arr[], int n)
{
    for(int i = n-1; i>=1; i--)
    // for(int i = 0; i<n-1; i++)
    {
        for(int j = 0; j<=i-1; j++)
        // for(int j = 0; j<n-i-1; j++)
        {
            if(arr[j] < arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
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
    selection_sort(arr, n);
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}