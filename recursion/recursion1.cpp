#include<iostream>
using namespace std;
int counT = 0;
void count()
{
    if(counT == 4)
        return;
    cout<<counT<<endl;
    counT++;
    count();
     
}
int main()
{
    count();
}