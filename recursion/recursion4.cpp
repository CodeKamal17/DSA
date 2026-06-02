//printing n - 1
#include<iostream>
using namespace std;
void print(int a, int b)
{
    if(a<1)
        return;
    cout<<a << " "; 
    print(a-1, b);

}

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    print(n, n);
    return 0;
}