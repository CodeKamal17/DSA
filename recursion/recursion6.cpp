//Parameterized method
//to find sum on n numbers
#include<iostream>
using namespace std;
void f(int i, int sum)
{
    if(i<1) 
    {
        cout<<sum;
        return;
    }    
    f(i-1, sum+i);
}
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Sum is: ";
    f(n,0);
    return 0;
}