// sorting array in asceding order using selection sort
#include<iostream>
using namespace std;
void selection_sort(int arr[], int n)
{
    for(int i=0; i<=n-2; i++)
    {
        int mini = i;
        for(int j = i; j<=n-1; j++)
        {
            if(arr[j]<arr[mini])
            {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
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