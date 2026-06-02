//Factorial of n 
#include<iostream>
using namespace std;
int f(int n)
{
    if(n==1)
    {
        return n;
    }
    return n * f(n-1);
}
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Factorial is: "<<f(n);
    return 0;
}