#include<iostream>
using namespace std;

void print28(int n)
{
    int size = 2*n-1;

    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            int top = i;
            int left = j;
            int right = size-1-j;
            int bottom = size-1-i;

            int smallest = top;

            if(left < smallest)
                smallest = left;

            if(right < smallest)
                smallest = right;

            if(bottom < smallest)
                smallest = bottom;

            cout<<n-smallest<<" ";
        }

        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;

    print28(n);

    return 0;
}
