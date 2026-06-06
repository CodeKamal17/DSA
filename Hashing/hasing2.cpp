#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;

    //pre compute

    //ieterate in the map
    // for(auto it : map)
    // {
    //     cout<<it.first<<"->"<<it.second<< endl;
    // }

    int hash[256] = {0};
    for(int i = 0; i<s.size(); i++)
    {
        hash[s[i]]++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        char c;
        cin>>c;
        //fetch
        cout<<hash[c]<<endl;
    }
    return 0;
}