// sorting array in ascending order using bubble sort
#include<iostream>
using namespace std;
void bubble_sort(int arr[], int n)
{
    for(int i = n-1; i>=1; i--)
    {
        int didSwap = 0;
        for(int j = 0; j<=i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
        }
        if(didSwap == 0)
            break;
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
    bubble_sort(arr, n);
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}